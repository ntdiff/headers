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

typedef struct _SEGMENT_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 TotalNumberOfPtes4132 : 10; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 ExtraSharedWowSubsections : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 LargePages : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 WatchProto : 1; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 DebugSymbolsLoaded : 1; /* bit position: 13 */
    /* 0x0000 */ unsigned __int64 WriteCombined : 1; /* bit position: 14 */
    /* 0x0000 */ unsigned __int64 NoCache : 1; /* bit position: 15 */
    /* 0x0000 */ unsigned __int64 FloppyMedia : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned __int64 DefaultProtectionMask : 5; /* bit position: 17 */
    /* 0x0000 */ unsigned __int64 ContainsPxeSubsection : 1; /* bit position: 22 */
    /* 0x0000 */ unsigned __int64 Spare : 40; /* bit position: 23 */
    /* 0x0000 */ unsigned __int64 Binary32 : 1; /* bit position: 63 */
  }; /* bitfield */
} SEGMENT_FLAGS, *PSEGMENT_FLAGS; /* size: 0x0008 */

typedef struct _MAPPED_FILE_SEGMENT
{
  /* 0x0000 */ struct _CONTROL_AREA* ControlArea;
  /* 0x0008 */ unsigned long TotalNumberOfPtes;
  /* 0x000c */ unsigned long NonExtendedPtes;
  /* 0x0010 */ unsigned __int64 NumberOfCommittedPages;
  /* 0x0018 */ unsigned __int64 SizeOfSegment;
  union
  {
    /* 0x0020 */ struct _MMEXTEND_INFO* ExtendInfo;
    /* 0x0020 */ void* BasedAddress;
  }; /* size: 0x0008 */
  /* 0x0028 */ struct _EX_PUSH_LOCK SegmentLock;
  /* 0x0030 */ struct _SEGMENT_FLAGS SegmentFlags;
  /* 0x0038 */ struct _MSUBSECTION* LastSubsectionHint;
} MAPPED_FILE_SEGMENT, *PMAPPED_FILE_SEGMENT; /* size: 0x0040 */

