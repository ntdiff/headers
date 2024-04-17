typedef struct _MONIKEREXTENT
{
  /* 0x0000 */ unsigned long cbExtentBytes;
  /* 0x0004 */ unsigned short usKeyValue;
  /* 0x0006 */ unsigned char achExtentBytes[1];
  /* 0x0007 */ char __PADDING__[1];
} MONIKEREXTENT, *PMONIKEREXTENT; /* size: 0x0008 */

