typedef struct _SEGMENT_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short TotalNumberOfPtes4132 : 10; /* bit position: 0 */
      /* 0x0000 */ unsigned short Spare0 : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned short SessionDriverProtos : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned short LargePages : 1; /* bit position: 12 */
      /* 0x0000 */ unsigned short DebugSymbolsLoaded : 1; /* bit position: 13 */
      /* 0x0000 */ unsigned short WriteCombined : 1; /* bit position: 14 */
      /* 0x0000 */ unsigned short NoCache : 1; /* bit position: 15 */
    }; /* bitfield */
    /* 0x0000 */ unsigned short Short0;
  }; /* size: 0x0002 */
  union
  {
    struct /* bitfield */
    {
      /* 0x0002 */ unsigned char ImageCetShadowStacksReady : 1; /* bit position: 0 */
      /* 0x0002 */ unsigned char DefaultProtectionMask : 5; /* bit position: 1 */
      /* 0x0002 */ unsigned char Binary32 : 1; /* bit position: 6 */
      /* 0x0002 */ unsigned char ContainsDebug : 1; /* bit position: 7 */
    }; /* bitfield */
    /* 0x0002 */ unsigned char UChar1;
  }; /* size: 0x0001 */
  union
  {
    struct /* bitfield */
    {
      /* 0x0003 */ unsigned char ForceCollision : 1; /* bit position: 0 */
      /* 0x0003 */ unsigned char ImageSigningType : 3; /* bit position: 1 */
      /* 0x0003 */ unsigned char ImageSigningLevel : 4; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0003 */ unsigned char UChar2;
  }; /* size: 0x0001 */
} SEGMENT_FLAGS, *PSEGMENT_FLAGS; /* size: 0x0004 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

typedef struct _SEGMENT
{
  /* 0x0000 */ struct _CONTROL_AREA* ControlArea;
  /* 0x0004 */ unsigned long TotalNumberOfPtes;
  /* 0x0008 */ struct _SEGMENT_FLAGS SegmentFlags;
  /* 0x000c */ unsigned long NumberOfCommittedPages;
  /* 0x0010 */ unsigned __int64 SizeOfSegment;
  union
  {
    /* 0x0018 */ struct _MMEXTEND_INFO* ExtendInfo;
    /* 0x0018 */ void* BasedAddress;
  }; /* size: 0x0004 */
  /* 0x001c */ struct _EX_PUSH_LOCK SegmentLock;
  union
  {
    union
    {
      /* 0x0020 */ unsigned long ImageCommitment;
      /* 0x0020 */ unsigned long CreatingProcessId;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  union
  {
    union
    {
      /* 0x0024 */ struct _MI_SECTION_IMAGE_INFORMATION* ImageInformation;
      /* 0x0024 */ void* FirstMappedVa;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u2;
  /* 0x0028 */ struct _MMPTE* PrototypePte;
  /* 0x002c */ long __PADDING__[1];
} SEGMENT, *PSEGMENT; /* size: 0x0030 */

