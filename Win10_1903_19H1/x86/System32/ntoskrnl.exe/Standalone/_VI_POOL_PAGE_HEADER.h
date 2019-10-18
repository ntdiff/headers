typedef struct _VI_POOL_PAGE_HEADER
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* NextPage;
  /* 0x0004 */ void* VerifierEntry;
  /* 0x0008 */ unsigned long Signature;
} VI_POOL_PAGE_HEADER, *PVI_POOL_PAGE_HEADER; /* size: 0x000c */

