typedef struct _HMAP_ENTRY
{
  /* 0x0000 */ unsigned __int64 BlockOffset;
  /* 0x0008 */ unsigned __int64 PermanentBinAddress;
  /* 0x0010 */ unsigned long MemAlloc;
  /* 0x0014 */ long __PADDING__[1];
} HMAP_ENTRY, *PHMAP_ENTRY; /* size: 0x0018 */

typedef struct _HMAP_TABLE
{
  /* 0x0000 */ struct _HMAP_ENTRY Table[512];
} HMAP_TABLE, *PHMAP_TABLE; /* size: 0x3000 */

