typedef struct _DBGKD_CONTEXT_EX
{
  /* 0x0000 */ unsigned long Offset;
  /* 0x0004 */ unsigned long ByteCount;
  /* 0x0008 */ unsigned long BytesCopied;
} DBGKD_CONTEXT_EX, *PDBGKD_CONTEXT_EX; /* size: 0x000c */

