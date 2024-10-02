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

struct tagXFORM
{
  /* 0x0000 */ float eM11;
  /* 0x0004 */ float eM12;
  /* 0x0008 */ float eM21;
  /* 0x000c */ float eM22;
  /* 0x0010 */ float eDx;
  /* 0x0014 */ float eDy;
}; /* size: 0x0018 */

struct tagEMRMASKBLT
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ struct _RECTL rclBounds;
  /* 0x0018 */ long xDest;
  /* 0x001c */ long yDest;
  /* 0x0020 */ long cxDest;
  /* 0x0024 */ long cyDest;
  /* 0x0028 */ unsigned long dwRop;
  /* 0x002c */ long xSrc;
  /* 0x0030 */ long ySrc;
  /* 0x0034 */ struct tagXFORM xformSrc;
  /* 0x004c */ unsigned long crBkColorSrc;
  /* 0x0050 */ unsigned long iUsageSrc;
  /* 0x0054 */ unsigned long offBmiSrc;
  /* 0x0058 */ unsigned long cbBmiSrc;
  /* 0x005c */ unsigned long offBitsSrc;
  /* 0x0060 */ unsigned long cbBitsSrc;
  /* 0x0064 */ long xMask;
  /* 0x0068 */ long yMask;
  /* 0x006c */ unsigned long iUsageMask;
  /* 0x0070 */ unsigned long offBmiMask;
  /* 0x0074 */ unsigned long cbBmiMask;
  /* 0x0078 */ unsigned long offBitsMask;
  /* 0x007c */ unsigned long cbBitsMask;
}; /* size: 0x0080 */

