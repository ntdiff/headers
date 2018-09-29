typedef struct _DBGKD_READ_WRITE_MSR
{
  /* 0x0000 */ unsigned long Msr;
  /* 0x0004 */ unsigned long DataValueLow;
  /* 0x0008 */ unsigned long DataValueHigh;
} DBGKD_READ_WRITE_MSR, *PDBGKD_READ_WRITE_MSR; /* size: 0x000c */

