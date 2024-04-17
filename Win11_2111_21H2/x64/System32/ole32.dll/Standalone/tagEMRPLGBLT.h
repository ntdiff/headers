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

typedef struct _POINTL
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
} POINTL, *PPOINTL; /* size: 0x0008 */

struct tagXFORM
{
  /* 0x0000 */ float eM11;
  /* 0x0004 */ float eM12;
  /* 0x0008 */ float eM21;
  /* 0x000c */ float eM22;
  /* 0x0010 */ float eDx;
  /* 0x0014 */ float eDy;
}; /* size: 0x0018 */

struct tagEMRPLGBLT
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ struct _RECTL rclBounds;
  /* 0x0018 */ struct _POINTL aptlDest[3];
  /* 0x0030 */ long xSrc;
  /* 0x0034 */ long ySrc;
  /* 0x0038 */ long cxSrc;
  /* 0x003c */ long cySrc;
  /* 0x0040 */ struct tagXFORM xformSrc;
  /* 0x0058 */ unsigned long crBkColorSrc;
  /* 0x005c */ unsigned long iUsageSrc;
  /* 0x0060 */ unsigned long offBmiSrc;
  /* 0x0064 */ unsigned long cbBmiSrc;
  /* 0x0068 */ unsigned long offBitsSrc;
  /* 0x006c */ unsigned long cbBitsSrc;
  /* 0x0070 */ long xMask;
  /* 0x0074 */ long yMask;
  /* 0x0078 */ unsigned long iUsageMask;
  /* 0x007c */ unsigned long offBmiMask;
  /* 0x0080 */ unsigned long cbBmiMask;
  /* 0x0084 */ unsigned long offBitsMask;
  /* 0x0088 */ unsigned long cbBitsMask;
}; /* size: 0x008c */

