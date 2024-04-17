struct tagEMR
{
  /* 0x0000 */ unsigned long iType;
  /* 0x0004 */ unsigned long nSize;
}; /* size: 0x0008 */

struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

struct tagLOGPEN
{
  /* 0x0000 */ unsigned int lopnStyle;
  /* 0x0004 */ struct tagPOINT lopnWidth;
  /* 0x000c */ unsigned long lopnColor;
}; /* size: 0x0010 */

struct tagEMRCREATEPEN
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ unsigned long ihPen;
  /* 0x000c */ struct tagLOGPEN lopn;
}; /* size: 0x001c */

