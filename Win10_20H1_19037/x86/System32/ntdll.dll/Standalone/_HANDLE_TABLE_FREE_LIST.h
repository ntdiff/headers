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

