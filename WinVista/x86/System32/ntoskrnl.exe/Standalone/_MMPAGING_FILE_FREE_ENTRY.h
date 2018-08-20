typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _MMPAGING_FILE_FREE_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY ListEntry;
  /* 0x0004 */ unsigned long FreeBit;
} MMPAGING_FILE_FREE_ENTRY, *PMMPAGING_FILE_FREE_ENTRY; /* size: 0x0008 */

