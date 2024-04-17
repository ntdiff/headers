struct tagEMR
{
  /* 0x0000 */ unsigned long iType;
  /* 0x0004 */ unsigned long nSize;
}; /* size: 0x0008 */

struct tagLOGBRUSH32
{
  /* 0x0000 */ unsigned int lbStyle;
  /* 0x0004 */ unsigned long lbColor;
  /* 0x0008 */ unsigned long lbHatch;
}; /* size: 0x000c */

struct tagEMRCREATEBRUSHINDIRECT
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ unsigned long ihBrush;
  /* 0x000c */ struct tagLOGBRUSH32 lb;
}; /* size: 0x0018 */

