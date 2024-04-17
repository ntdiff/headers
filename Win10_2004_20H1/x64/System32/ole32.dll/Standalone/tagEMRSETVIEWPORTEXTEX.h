struct tagEMR
{
  /* 0x0000 */ unsigned long iType;
  /* 0x0004 */ unsigned long nSize;
}; /* size: 0x0008 */

struct tagSIZE
{
  /* 0x0000 */ long cx;
  /* 0x0004 */ long cy;
}; /* size: 0x0008 */

struct tagEMRSETVIEWPORTEXTEX
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ struct tagSIZE szlExtent;
}; /* size: 0x0010 */

