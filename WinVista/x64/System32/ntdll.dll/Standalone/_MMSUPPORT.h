typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _MMSUPPORT_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char SessionSpace : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char ModwriterAttached : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char TrimHard : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned char MaximumWorkingSetHard : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char ForceTrim : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char MinimumWorkingSetHard : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char SessionMaster : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char TrimmerAttached : 1; /* bit position: 7 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0001 */ unsigned char TrimmerDetaching : 1; /* bit position: 0 */
    /* 0x0001 */ unsigned char Reserved : 7; /* bit position: 1 */
  }; /* bitfield */
  /* 0x0002 */ unsigned char MemoryPriority : 8; /* bit position: 0 */
  struct /* bitfield */
  {
    /* 0x0003 */ unsigned char WsleDeleted : 1; /* bit position: 0 */
    /* 0x0003 */ unsigned char VmExiting : 1; /* bit position: 1 */
    /* 0x0003 */ unsigned char Available : 6; /* bit position: 2 */
  }; /* bitfield */
} MMSUPPORT_FLAGS, *PMMSUPPORT_FLAGS; /* size: 0x0004 */

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

typedef struct _MMSUPPORT
{
  /* 0x0000 */ struct _LIST_ENTRY WorkingSetExpansionLinks;
  /* 0x0010 */ unsigned short LastTrimStamp;
  /* 0x0012 */ unsigned short NextPageColor;
  /* 0x0014 */ struct _MMSUPPORT_FLAGS Flags;
  /* 0x0018 */ unsigned long PageFaultCount;
  /* 0x001c */ unsigned long PeakWorkingSetSize;
  /* 0x0020 */ unsigned long Spare0;
  /* 0x0024 */ unsigned long MinimumWorkingSetSize;
  /* 0x0028 */ unsigned long MaximumWorkingSetSize;
  /* 0x0030 */ struct _MMWSL* VmWorkingSetList;
  /* 0x0038 */ unsigned long Claim;
  /* 0x003c */ unsigned long Spare[1];
  /* 0x0040 */ unsigned long WorkingSetPrivateSize;
  /* 0x0044 */ unsigned long WorkingSetSizeOverhead;
  /* 0x0048 */ unsigned long WorkingSetSize;
  /* 0x0050 */ struct _KEVENT* ExitEvent;
  /* 0x0058 */ struct _EX_PUSH_LOCK WorkingSetMutex;
  /* 0x0060 */ void* AccessLog;
} MMSUPPORT, *PMMSUPPORT; /* size: 0x0068 */

