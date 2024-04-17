struct tagEMR
{
  /* 0x0000 */ unsigned long iType;
  /* 0x0004 */ unsigned long nSize;
}; /* size: 0x0008 */

struct tagEMRNAMEDESCAPE
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ int iEscape;
  /* 0x000c */ int cbDriver;
  /* 0x0010 */ int cbEscData;
  /* 0x0014 */ unsigned char EscData[1];
  /* 0x0015 */ char __PADDING__[3];
}; /* size: 0x0018 */

