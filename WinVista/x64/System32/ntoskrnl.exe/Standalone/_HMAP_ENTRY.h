typedef struct _HMAP_ENTRY
{
  /* 0x0000 */ unsigned __int64 BlockAddress;
  /* 0x0008 */ unsigned __int64 BinAddress;
  /* 0x0010 */ struct _CM_VIEW_OF_FILE* CmView;
  /* 0x0018 */ unsigned long MemAlloc;
  /* 0x001c */ long __PADDING__[1];
} HMAP_ENTRY, *PHMAP_ENTRY; /* size: 0x0020 */

