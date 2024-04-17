struct tagEMR
{
  /* 0x0000 */ unsigned long iType;
  /* 0x0004 */ unsigned long nSize;
}; /* size: 0x0008 */

struct tagEMRGDICOMMENT
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ unsigned long cbData;
  /* 0x000c */ unsigned char Data[1];
  /* 0x000d */ char __PADDING__[3];
}; /* size: 0x0010 */

