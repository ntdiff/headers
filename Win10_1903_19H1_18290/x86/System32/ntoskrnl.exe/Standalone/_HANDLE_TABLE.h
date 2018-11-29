typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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

typedef struct _HANDLE_TABLE_FREE_LIST
{
  /* 0x0000 */ struct _EX_PUSH_LOCK FreeListLock;
  /* 0x0004 */ union _HANDLE_TABLE_ENTRY* FirstFreeHandleEntry;
  /* 0x0008 */ union _HANDLE_TABLE_ENTRY* LastFreeHandleEntry;
  /* 0x000c */ long HandleCount;
  /* 0x0010 */ unsigned long HighWaterMark;
  /* 0x0014 */ long __PADDING__[11];
} HANDLE_TABLE_FREE_LIST, *PHANDLE_TABLE_FREE_LIST; /* size: 0x0040 */

typedef struct _HANDLE_TABLE
{
  /* 0x0000 */ unsigned long NextHandleNeedingPool;
  /* 0x0004 */ long ExtraInfoPages;
  /* 0x0008 */ volatile unsigned long TableCode;
  /* 0x000c */ struct _EPROCESS* QuotaProcess;
  /* 0x0010 */ struct _LIST_ENTRY HandleTableList;
  /* 0x0018 */ unsigned long UniqueProcessId;
  union
  {
    /* 0x001c */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x001c */ unsigned char StrictFIFO : 1; /* bit position: 0 */
      /* 0x001c */ unsigned char EnableHandleExceptions : 1; /* bit position: 1 */
      /* 0x001c */ unsigned char Rundown : 1; /* bit position: 2 */
      /* 0x001c */ unsigned char Duplicated : 1; /* bit position: 3 */
      /* 0x001c */ unsigned char RaiseUMExceptionOnInvalidHandleClose : 1; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0020 */ struct _EX_PUSH_LOCK HandleContentionEvent;
  /* 0x0024 */ struct _EX_PUSH_LOCK HandleTableLock;
  union
  {
    /* 0x0040 */ struct _HANDLE_TABLE_FREE_LIST FreeLists[1];
    struct
    {
      /* 0x0040 */ unsigned char ActualEntry[20];
      /* 0x0054 */ struct _HANDLE_TRACE_DEBUG_INFO* DebugInfo;
      /* 0x0058 */ long __PADDING__[10];
    }; /* size: 0x0040 */
  }; /* size: 0x0040 */
} HANDLE_TABLE, *PHANDLE_TABLE; /* size: 0x0080 */

