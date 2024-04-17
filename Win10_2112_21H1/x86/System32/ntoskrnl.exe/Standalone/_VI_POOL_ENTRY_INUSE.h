typedef struct _VI_POOL_ENTRY_INUSE
{
  /* 0x0000 */ void* VirtualAddress;
  /* 0x0004 */ void* CallingAddress;
  /* 0x0008 */ unsigned long NumberOfBytes;
  /* 0x000c */ unsigned long Tag;
} VI_POOL_ENTRY_INUSE, *PVI_POOL_ENTRY_INUSE; /* size: 0x0010 */

