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
  /* 0x0020 */ long __PADDING__[8];
} HANDLE_TABLE_FREE_LIST, *PHANDLE_TABLE_FREE_LIST; /* size: 0x0040 */

