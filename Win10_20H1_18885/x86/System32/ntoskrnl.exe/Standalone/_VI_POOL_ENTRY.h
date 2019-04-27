typedef struct _VI_POOL_PAGE_HEADER
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* NextPage;
  /* 0x0004 */ void* VerifierEntry;
  /* 0x0008 */ unsigned long Signature;
} VI_POOL_PAGE_HEADER, *PVI_POOL_PAGE_HEADER; /* size: 0x000c */

typedef struct _VI_POOL_ENTRY_INUSE
{
  /* 0x0000 */ void* VirtualAddress;
  /* 0x0004 */ void* CallingAddress;
  /* 0x0008 */ unsigned long NumberOfBytes;
  /* 0x000c */ unsigned long Tag;
} VI_POOL_ENTRY_INUSE, *PVI_POOL_ENTRY_INUSE; /* size: 0x0010 */

typedef struct _VI_POOL_ENTRY
{
  union
  {
    /* 0x0000 */ struct _VI_POOL_PAGE_HEADER PageHeader;
    /* 0x0000 */ struct _VI_POOL_ENTRY_INUSE InUse;
    struct
    {
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY* NextFree;
      /* 0x0004 */ long __PADDING__[3];
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
} VI_POOL_ENTRY, *PVI_POOL_ENTRY; /* size: 0x0010 */

