typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Exclusive : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Shared : 30; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _HANDLE_TABLE
{
  /* 0x0000 */ unsigned long TableCode;
  /* 0x0004 */ struct _EPROCESS* QuotaProcess;
  /* 0x0008 */ void* UniqueProcessId;
  /* 0x000c */ struct _EX_PUSH_LOCK HandleTableLock[4];
  /* 0x001c */ struct _LIST_ENTRY HandleTableList;
  /* 0x0024 */ struct _EX_PUSH_LOCK HandleContentionEvent;
  /* 0x0028 */ struct _HANDLE_TRACE_DEBUG_INFO* DebugInfo;
  /* 0x002c */ long ExtraInfoPages;
  /* 0x0030 */ unsigned long FirstFree;
  /* 0x0034 */ unsigned long LastFree;
  /* 0x0038 */ unsigned long NextHandleNeedingPool;
  /* 0x003c */ long HandleCount;
  union
  {
    /* 0x0040 */ unsigned long Flags;
    struct
    {
      /* 0x0040 */ unsigned char StrictFIFO : 1; /* bit position: 0 */
      /* 0x0041 */ char __PADDING__[3];
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
} HANDLE_TABLE, *PHANDLE_TABLE; /* size: 0x0044 */

