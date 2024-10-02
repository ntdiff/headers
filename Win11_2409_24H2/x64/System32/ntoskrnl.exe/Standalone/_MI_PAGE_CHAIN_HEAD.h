typedef struct _MI_PAGE_CHAIN_HEAD
{
  /* 0x0000 */ struct _MMPFN* Head;
  /* 0x0008 */ struct _MMPFN* Tail;
  /* 0x0010 */ unsigned __int64 NumberOfEntries;
} MI_PAGE_CHAIN_HEAD, *PMI_PAGE_CHAIN_HEAD; /* size: 0x0018 */

