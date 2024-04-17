struct tagEMR
{
  /* 0x0000 */ unsigned long iType;
  /* 0x0004 */ unsigned long nSize;
}; /* size: 0x0008 */

struct tagEXTLOGPEN
{
  /* 0x0000 */ unsigned long elpPenStyle;
  /* 0x0004 */ unsigned long elpWidth;
  /* 0x0008 */ unsigned int elpBrushStyle;
  /* 0x000c */ unsigned long elpColor;
  /* 0x0010 */ unsigned long elpHatch;
  /* 0x0014 */ unsigned long elpNumEntries;
  /* 0x0018 */ unsigned long elpStyleEntry[1];
}; /* size: 0x001c */

struct tagEMREXTCREATEPEN
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ unsigned long ihPen;
  /* 0x000c */ unsigned long offBmi;
  /* 0x0010 */ unsigned long cbBmi;
  /* 0x0014 */ unsigned long offBits;
  /* 0x0018 */ unsigned long cbBits;
  /* 0x001c */ struct tagEXTLOGPEN elp;
}; /* size: 0x0038 */

