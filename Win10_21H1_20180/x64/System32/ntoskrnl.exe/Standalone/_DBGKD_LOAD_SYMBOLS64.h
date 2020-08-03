typedef struct _DBGKD_LOAD_SYMBOLS64
{
  /* 0x0000 */ unsigned long PathNameLength;
  /* 0x0008 */ unsigned __int64 BaseOfDll;
  /* 0x0010 */ unsigned __int64 ProcessId;
  /* 0x0018 */ unsigned long CheckSum;
  /* 0x001c */ unsigned long SizeOfImage;
  /* 0x0020 */ unsigned char UnloadSymbols;
  /* 0x0021 */ char __PADDING__[7];
} DBGKD_LOAD_SYMBOLS64, *PDBGKD_LOAD_SYMBOLS64; /* size: 0x0028 */

