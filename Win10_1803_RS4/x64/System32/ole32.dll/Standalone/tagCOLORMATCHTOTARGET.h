struct tagEMR
{
  /* 0x0000 */ unsigned long iType;
  /* 0x0004 */ unsigned long nSize;
}; /* size: 0x0008 */

struct tagCOLORMATCHTOTARGET
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ unsigned long dwAction;
  /* 0x000c */ unsigned long dwFlags;
  /* 0x0010 */ unsigned long cbName;
  /* 0x0014 */ unsigned long cbData;
  /* 0x0018 */ unsigned char Data[1];
  /* 0x0019 */ char __PADDING__[3];
}; /* size: 0x001c */

