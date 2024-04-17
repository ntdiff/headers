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

typedef struct _TRIVERTEX
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
  /* 0x0008 */ unsigned short Red;
  /* 0x000a */ unsigned short Green;
  /* 0x000c */ unsigned short Blue;
  /* 0x000e */ unsigned short Alpha;
} TRIVERTEX, *PTRIVERTEX; /* size: 0x0010 */

struct tagEMRGRADIENTFILL
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ struct _RECTL rclBounds;
  /* 0x0018 */ unsigned long nVer;
  /* 0x001c */ unsigned long nTri;
  /* 0x0020 */ unsigned long ulMode;
  /* 0x0024 */ struct _TRIVERTEX Ver[1];
}; /* size: 0x0034 */

