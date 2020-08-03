typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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

typedef struct _HANDLE_TABLE_FREE_LIST
{
  /* 0x0000 */ struct _EX_PUSH_LOCK FreeListLock;
  /* 0x0008 */ union _HANDLE_TABLE_ENTRY* FirstFreeHandleEntry;
  /* 0x0010 */ union _HANDLE_TABLE_ENTRY* LastFreeHandleEntry;
  /* 0x0018 */ long HandleCount;
  /* 0x001c */ unsigned long HighWaterMark;
  /* 0x0020 */ long __PADDING__[24];
} HANDLE_TABLE_FREE_LIST, *PHANDLE_TABLE_FREE_LIST; /* size: 0x0080 */

typedef struct _HANDLE_TABLE
{
  /* 0x0000 */ unsigned long NextHandleNeedingPool;
  /* 0x0004 */ long ExtraInfoPages;
  /* 0x0008 */ volatile unsigned __int64 TableCode;
  /* 0x0010 */ struct _EPROCESS* QuotaProcess;
  /* 0x0018 */ struct _LIST_ENTRY HandleTableList;
  /* 0x0028 */ unsigned long UniqueProcessId;
  union
  {
    /* 0x002c */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x002c */ unsigned char StrictFIFO : 1; /* bit position: 0 */
      /* 0x002c */ unsigned char EnableHandleExceptions : 1; /* bit position: 1 */
      /* 0x002c */ unsigned char Rundown : 1; /* bit position: 2 */
      /* 0x002c */ unsigned char Duplicated : 1; /* bit position: 3 */
      /* 0x002c */ unsigned char RaiseUMExceptionOnInvalidHandleClose : 1; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0030 */ struct _EX_PUSH_LOCK HandleContentionEvent;
  /* 0x0038 */ struct _EX_PUSH_LOCK HandleTableLock;
  union
  {
    /* 0x0080 */ struct _HANDLE_TABLE_FREE_LIST FreeLists[1];
    struct
    {
      /* 0x0080 */ unsigned char ActualEntry[32];
      /* 0x00a0 */ struct _HANDLE_TRACE_DEBUG_INFO* DebugInfo;
      /* 0x00a8 */ long __PADDING__[22];
    }; /* size: 0x0080 */
  }; /* size: 0x0080 */
} HANDLE_TABLE, *PHANDLE_TABLE; /* size: 0x0100 */

