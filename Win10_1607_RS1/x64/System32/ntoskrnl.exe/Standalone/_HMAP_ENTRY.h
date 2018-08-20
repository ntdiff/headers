typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned __int64 Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0008 */

typedef struct _HMAP_ENTRY
{
  /* 0x0000 */ unsigned __int64 BlockOffset;
  /* 0x0008 */ unsigned __int64 PermanentBinAddress;
  /* 0x0010 */ unsigned __int64 TemporaryBinAddress;
  /* 0x0018 */ struct _EX_RUNDOWN_REF TemporaryBinRundown;
  /* 0x0020 */ unsigned long MemAlloc;
  /* 0x0024 */ long __PADDING__[1];
} HMAP_ENTRY, *PHMAP_ENTRY; /* size: 0x0028 */

