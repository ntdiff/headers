struct tagEMR
{
  /* 0x0000 */ unsigned long iType;
  /* 0x0004 */ unsigned long nSize;
}; /* size: 0x0008 */

struct tagEMRSETMAPPERFLAGS
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ unsigned long dwFlags;
}; /* size: 0x000c */

