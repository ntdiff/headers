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
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

typedef struct _MAPPED_FILE_SEGMENT
{
  /* 0x0000 */ struct _CONTROL_AREA* ControlArea;
  /* 0x0008 */ unsigned long TotalNumberOfPtes;
  /* 0x000c */ struct _SEGMENT_FLAGS SegmentFlags;
  /* 0x0010 */ unsigned __int64 NumberOfCommittedPages;
  /* 0x0018 */ unsigned __int64 SizeOfSegment;
  union
  {
    /* 0x0020 */ struct _MMEXTEND_INFO* ExtendInfo;
    /* 0x0020 */ void* BasedAddress;
  }; /* size: 0x0008 */
  /* 0x0028 */ struct _EX_PUSH_LOCK SegmentLock;
} MAPPED_FILE_SEGMENT, *PMAPPED_FILE_SEGMENT; /* size: 0x0030 */

