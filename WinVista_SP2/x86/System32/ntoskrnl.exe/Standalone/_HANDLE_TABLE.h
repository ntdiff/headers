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
  /* 0x000c */ struct _EX_PUSH_LOCK HandleLock;
  /* 0x0010 */ struct _LIST_ENTRY HandleTableList;
  /* 0x0018 */ struct _EX_PUSH_LOCK HandleContentionEvent;
  /* 0x001c */ struct _HANDLE_TRACE_DEBUG_INFO* DebugInfo;
  /* 0x0020 */ long ExtraInfoPages;
  union
  {
    /* 0x0024 */ unsigned long Flags;
    /* 0x0024 */ unsigned char StrictFIFO : 1; /* bit position: 0 */
  }; /* size: 0x0004 */
  /* 0x0028 */ long FirstFreeHandle;
  /* 0x002c */ struct _HANDLE_TABLE_ENTRY* LastFreeHandleEntry;
  /* 0x0030 */ long HandleCount;
  /* 0x0034 */ unsigned long NextHandleNeedingPool;
} HANDLE_TABLE, *PHANDLE_TABLE; /* size: 0x0038 */

