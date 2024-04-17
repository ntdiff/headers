struct tagEMR
{
  /* 0x0000 */ unsigned long iType;
  /* 0x0004 */ unsigned long nSize;
}; /* size: 0x0008 */

typedef struct _RECTL
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
} RECTL, *PRECTL; /* size: 0x0010 */

struct tagEMRSETDIBITSTODEVICE
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ struct _RECTL rclBounds;
  /* 0x0018 */ long xDest;
  /* 0x001c */ long yDest;
  /* 0x0020 */ long xSrc;
  /* 0x0024 */ long ySrc;
  /* 0x0028 */ long cxSrc;
  /* 0x002c */ long cySrc;
  /* 0x0030 */ unsigned long offBmiSrc;
  /* 0x0034 */ unsigned long cbBmiSrc;
  /* 0x0038 */ unsigned long offBitsSrc;
  /* 0x003c */ unsigned long cbBitsSrc;
  /* 0x0040 */ unsigned long iUsageSrc;
  /* 0x0044 */ unsigned long iStartScan;
  /* 0x0048 */ unsigned long cScans;
}; /* size: 0x004c */

