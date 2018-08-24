typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _NBQUEUE_BLOCK
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY SListEntry;
  /* 0x0008 */ unsigned __int64 Next;
  /* 0x0010 */ unsigned __int64 Data;
} NBQUEUE_BLOCK, *PNBQUEUE_BLOCK; /* size: 0x0018 */

