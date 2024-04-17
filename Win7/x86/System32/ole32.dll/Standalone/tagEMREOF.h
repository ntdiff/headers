struct tagEMR
{
  /* 0x0000 */ unsigned long iType;
  /* 0x0004 */ unsigned long nSize;
}; /* size: 0x0008 */

struct tagEMREOF
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ unsigned long nPalEntries;
  /* 0x000c */ unsigned long offPalEntries;
  /* 0x0010 */ unsigned long nSizeLast;
}; /* size: 0x0014 */

