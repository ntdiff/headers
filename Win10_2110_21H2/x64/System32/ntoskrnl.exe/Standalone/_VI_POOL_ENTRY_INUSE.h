typedef struct _VI_POOL_ENTRY_INUSE
{
  /* 0x0000 */ void* VirtualAddress;
  /* 0x0008 */ void* CallingAddress;
  /* 0x0010 */ unsigned __int64 NumberOfBytes;
  /* 0x0018 */ unsigned __int64 Tag;
} VI_POOL_ENTRY_INUSE, *PVI_POOL_ENTRY_INUSE; /* size: 0x0020 */

