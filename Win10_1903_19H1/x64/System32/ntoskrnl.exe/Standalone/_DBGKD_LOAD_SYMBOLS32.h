typedef struct _DBGKD_LOAD_SYMBOLS32
{
  /* 0x0000 */ unsigned long PathNameLength;
  /* 0x0004 */ unsigned long BaseOfDll;
  /* 0x0008 */ unsigned long ProcessId;
  /* 0x000c */ unsigned long CheckSum;
  /* 0x0010 */ unsigned long SizeOfImage;
  /* 0x0014 */ unsigned char UnloadSymbols;
  /* 0x0015 */ char __PADDING__[3];
} DBGKD_LOAD_SYMBOLS32, *PDBGKD_LOAD_SYMBOLS32; /* size: 0x0018 */

