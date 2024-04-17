struct tagEMR
{
  /* 0x0000 */ unsigned long iType;
  /* 0x0004 */ unsigned long nSize;
}; /* size: 0x0008 */

struct tagEMRSCALEVIEWPORTEXTEX
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ long xNum;
  /* 0x000c */ long xDenom;
  /* 0x0010 */ long yNum;
  /* 0x0014 */ long yDenom;
}; /* size: 0x0018 */

