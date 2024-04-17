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

struct tagEMRFILLRGN
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ struct _RECTL rclBounds;
  /* 0x0018 */ unsigned long cbRgnData;
  /* 0x001c */ unsigned long ihBrush;
  /* 0x0020 */ unsigned char RgnData[1];
  /* 0x0021 */ char __PADDING__[3];
}; /* size: 0x0024 */

