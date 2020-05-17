typedef struct _DBGKD_SEARCH_MEMORY
{
  union
  {
    /* 0x0000 */ unsigned __int64 SearchAddress;
    /* 0x0000 */ unsigned __int64 FoundAddress;
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned __int64 SearchLength;
  /* 0x0010 */ unsigned long PatternLength;
  /* 0x0014 */ long __PADDING__[1];
} DBGKD_SEARCH_MEMORY, *PDBGKD_SEARCH_MEMORY; /* size: 0x0018 */

