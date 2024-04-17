typedef struct _VI_POOL_PAGE_HEADER
{
  /* 0x0000 */ struct _SLIST_ENTRY* NextPage;
  /* 0x0008 */ void* VerifierEntry;
  /* 0x0010 */ unsigned __int64 Signature;
} VI_POOL_PAGE_HEADER, *PVI_POOL_PAGE_HEADER; /* size: 0x0018 */

