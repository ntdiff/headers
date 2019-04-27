typedef struct _DBGKD_FILL_MEMORY
{
  /* 0x0000 */ unsigned __int64 Address;
  /* 0x0008 */ unsigned long Length;
  /* 0x000c */ unsigned short Flags;
  /* 0x000e */ unsigned short PatternLength;
} DBGKD_FILL_MEMORY, *PDBGKD_FILL_MEMORY; /* size: 0x0010 */

