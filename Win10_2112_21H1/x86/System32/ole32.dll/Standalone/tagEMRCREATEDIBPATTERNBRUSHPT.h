struct tagEMR
{
  /* 0x0000 */ unsigned long iType;
  /* 0x0004 */ unsigned long nSize;
}; /* size: 0x0008 */

struct tagEMRCREATEDIBPATTERNBRUSHPT
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ unsigned long ihBrush;
  /* 0x000c */ unsigned long iUsage;
  /* 0x0010 */ unsigned long offBmi;
  /* 0x0014 */ unsigned long cbBmi;
  /* 0x0018 */ unsigned long offBits;
  /* 0x001c */ unsigned long cbBits;
}; /* size: 0x0020 */

