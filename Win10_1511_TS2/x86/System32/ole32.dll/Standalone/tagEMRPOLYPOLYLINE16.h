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

struct tagPOINTS
{
  /* 0x0000 */ short x;
  /* 0x0002 */ short y;
}; /* size: 0x0004 */

struct tagEMRPOLYPOLYLINE16
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ struct _RECTL rclBounds;
  /* 0x0018 */ unsigned long nPolys;
  /* 0x001c */ unsigned long cpts;
  /* 0x0020 */ unsigned long aPolyCounts[1];
  /* 0x0024 */ struct tagPOINTS apts[1];
}; /* size: 0x0028 */

