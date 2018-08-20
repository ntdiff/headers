typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef union _SLIST_HEADER
{
  union
  {
    /* 0x0000 */ unsigned __int64 Alignment;
    struct
    {
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY Next;
      /* 0x0004 */ unsigned short Depth;
      /* 0x0006 */ unsigned short Sequence;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

typedef struct _USER_MEMORY_CACHE_ENTRY
{
  /* 0x0000 */ union _SLIST_HEADER UserBlocks;
  /* 0x0008 */ unsigned long AvailableBlocks;
  /* 0x000c */ long __PADDING__[1];
} USER_MEMORY_CACHE_ENTRY, *PUSER_MEMORY_CACHE_ENTRY; /* size: 0x0010 */

