typedef struct _VI_POOL_PAGE_HEADER
{
  /* 0x0000 */ struct _SLIST_ENTRY* NextPage;
  /* 0x0008 */ void* VerifierEntry;
  /* 0x0010 */ unsigned __int64 Signature;
} VI_POOL_PAGE_HEADER, *PVI_POOL_PAGE_HEADER; /* size: 0x0018 */

typedef struct _VI_POOL_ENTRY_INUSE
{
  /* 0x0000 */ void* VirtualAddress;
  /* 0x0008 */ void* CallingAddress;
  /* 0x0010 */ unsigned __int64 NumberOfBytes;
  /* 0x0018 */ unsigned __int64 Tag;
} VI_POOL_ENTRY_INUSE, *PVI_POOL_ENTRY_INUSE; /* size: 0x0020 */

typedef struct _VI_POOL_ENTRY
{
  union
  {
    /* 0x0000 */ struct _VI_POOL_PAGE_HEADER PageHeader;
    /* 0x0000 */ struct _VI_POOL_ENTRY_INUSE InUse;
    struct
    {
      /* 0x0000 */ struct _SLIST_ENTRY* NextFree;
      /* 0x0008 */ long __PADDING__[6];
    }; /* size: 0x0020 */
  }; /* size: 0x0020 */
} VI_POOL_ENTRY, *PVI_POOL_ENTRY; /* size: 0x0020 */

