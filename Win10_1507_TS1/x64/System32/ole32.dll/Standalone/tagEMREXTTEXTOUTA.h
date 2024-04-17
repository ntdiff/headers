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

struct tagEMRTEXT
{
  /* 0x0000 */ struct _POINTL ptlReference;
  /* 0x0008 */ unsigned long nChars;
  /* 0x000c */ unsigned long offString;
  /* 0x0010 */ unsigned long fOptions;
  /* 0x0014 */ struct _RECTL rcl;
  /* 0x0024 */ unsigned long offDx;
}; /* size: 0x0028 */

struct tagEMREXTTEXTOUTA
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ struct _RECTL rclBounds;
  /* 0x0018 */ unsigned long iGraphicsMode;
  /* 0x001c */ float exScale;
  /* 0x0020 */ float eyScale;
  /* 0x0024 */ struct tagEMRTEXT emrtext;
}; /* size: 0x004c */

