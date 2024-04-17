struct tagEMR
{
  /* 0x0000 */ unsigned long iType;
  /* 0x0004 */ unsigned long nSize;
}; /* size: 0x0008 */

struct tagEMREXTSELECTCLIPRGN
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ unsigned long cbRgnData;
  /* 0x000c */ unsigned long iMode;
  /* 0x0010 */ unsigned char RgnData[1];
  /* 0x0011 */ char __PADDING__[3];
}; /* size: 0x0014 */

