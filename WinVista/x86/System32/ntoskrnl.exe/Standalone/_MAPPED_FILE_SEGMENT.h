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

typedef struct _SEGMENT_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long TotalNumberOfPtes4132 : 10; /* bit position: 0 */
    /* 0x0000 */ unsigned long ExtraSharedWowSubsections : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long LargePages : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned long WatchProto : 1; /* bit position: 12 */
    /* 0x0000 */ unsigned long DebugSymbolsLoaded : 1; /* bit position: 13 */
    /* 0x0000 */ unsigned long WriteCombined : 1; /* bit position: 14 */
    /* 0x0000 */ unsigned long NoCache : 1; /* bit position: 15 */
    /* 0x0000 */ unsigned long FloppyMedia : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned long DefaultProtectionMask : 5; /* bit position: 17 */
    /* 0x0000 */ unsigned long ContainsPxeSubsection : 1; /* bit position: 22 */
    /* 0x0000 */ unsigned long Spare : 9; /* bit position: 23 */
  }; /* bitfield */
} SEGMENT_FLAGS, *PSEGMENT_FLAGS; /* size: 0x0004 */

typedef struct _MAPPED_FILE_SEGMENT
{
  /* 0x0000 */ struct _CONTROL_AREA* ControlArea;
  /* 0x0004 */ unsigned long TotalNumberOfPtes;
  /* 0x0008 */ unsigned long NonExtendedPtes;
  /* 0x000c */ unsigned long NumberOfCommittedPages;
  /* 0x0010 */ unsigned __int64 SizeOfSegment;
  union
  {
    /* 0x0018 */ struct _MMEXTEND_INFO* ExtendInfo;
    /* 0x0018 */ void* BasedAddress;
  }; /* size: 0x0004 */
  /* 0x001c */ struct _EX_PUSH_LOCK SegmentLock;
  /* 0x0020 */ struct _SEGMENT_FLAGS SegmentFlags;
  /* 0x0024 */ struct _MSUBSECTION* LastSubsectionHint;
} MAPPED_FILE_SEGMENT, *PMAPPED_FILE_SEGMENT; /* size: 0x0028 */

