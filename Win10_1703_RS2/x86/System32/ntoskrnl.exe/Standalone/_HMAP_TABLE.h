typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned long Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0004 */

typedef struct _HMAP_ENTRY
{
  /* 0x0000 */ unsigned long BlockOffset;
  /* 0x0004 */ unsigned long PermanentBinAddress;
  /* 0x0008 */ unsigned long TemporaryBinAddress;
  /* 0x000c */ struct _EX_RUNDOWN_REF TemporaryBinRundown;
  /* 0x0010 */ unsigned long MemAlloc;
} HMAP_ENTRY, *PHMAP_ENTRY; /* size: 0x0014 */

typedef struct _HMAP_TABLE
{
  /* 0x0000 */ struct _HMAP_ENTRY Table[512];
} HMAP_TABLE, *PHMAP_TABLE; /* size: 0x2800 */

