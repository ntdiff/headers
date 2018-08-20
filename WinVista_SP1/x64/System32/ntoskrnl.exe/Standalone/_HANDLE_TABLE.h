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

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _HANDLE_TABLE
{
  /* 0x0000 */ unsigned __int64 TableCode;
  /* 0x0008 */ struct _EPROCESS* QuotaProcess;
  /* 0x0010 */ void* UniqueProcessId;
  /* 0x0018 */ struct _EX_PUSH_LOCK HandleLock;
  /* 0x0020 */ struct _LIST_ENTRY HandleTableList;
  /* 0x0030 */ struct _EX_PUSH_LOCK HandleContentionEvent;
  /* 0x0038 */ struct _HANDLE_TRACE_DEBUG_INFO* DebugInfo;
  /* 0x0040 */ long ExtraInfoPages;
  union
  {
    /* 0x0044 */ unsigned long Flags;
    /* 0x0044 */ unsigned char StrictFIFO : 1; /* bit position: 0 */
  }; /* size: 0x0004 */
  /* 0x0048 */ long FirstFreeHandle;
  /* 0x0050 */ struct _HANDLE_TABLE_ENTRY* LastFreeHandleEntry;
  /* 0x0058 */ long HandleCount;
  /* 0x005c */ unsigned long NextHandleNeedingPool;
} HANDLE_TABLE, *PHANDLE_TABLE; /* size: 0x0060 */

