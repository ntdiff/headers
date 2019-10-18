typedef struct _HMAP_ENTRY
{
  /* 0x0000 */ unsigned __int64 BlockOffset;
  /* 0x0008 */ unsigned __int64 PermanentBinAddress;
  /* 0x0010 */ unsigned long MemAlloc;
  /* 0x0014 */ long __PADDING__[1];
} HMAP_ENTRY, *PHMAP_ENTRY; /* size: 0x0018 */

