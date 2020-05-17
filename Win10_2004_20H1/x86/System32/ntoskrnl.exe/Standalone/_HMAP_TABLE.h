typedef struct _HMAP_ENTRY
{
  /* 0x0000 */ unsigned long BlockOffset;
  /* 0x0004 */ unsigned long PermanentBinAddress;
  /* 0x0008 */ unsigned long MemAlloc;
} HMAP_ENTRY, *PHMAP_ENTRY; /* size: 0x000c */

typedef struct _HMAP_TABLE
{
  /* 0x0000 */ struct _HMAP_ENTRY Table[512];
} HMAP_TABLE, *PHMAP_TABLE; /* size: 0x1800 */

