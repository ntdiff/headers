struct tagEMR
{
  /* 0x0000 */ unsigned long iType;
  /* 0x0004 */ unsigned long nSize;
}; /* size: 0x0008 */

struct tagEMREXTESCAPE
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ int iEscape;
  /* 0x000c */ int cbEscData;
  /* 0x0010 */ unsigned char EscData[1];
  /* 0x0011 */ char __PADDING__[3];
}; /* size: 0x0014 */

