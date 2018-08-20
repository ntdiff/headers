typedef struct _HMAP_ENTRY
{
  /* 0x0000 */ unsigned long BlockAddress;
  /* 0x0004 */ unsigned long BinAddress;
  /* 0x0008 */ struct _CM_VIEW_OF_FILE* CmView;
  /* 0x000c */ unsigned long MemAlloc;
} HMAP_ENTRY, *PHMAP_ENTRY; /* size: 0x0010 */

