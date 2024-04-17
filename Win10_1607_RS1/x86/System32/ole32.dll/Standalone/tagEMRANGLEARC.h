struct tagEMR
{
  /* 0x0000 */ unsigned long iType;
  /* 0x0004 */ unsigned long nSize;
}; /* size: 0x0008 */

typedef struct _POINTL
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
} POINTL, *PPOINTL; /* size: 0x0008 */

struct tagEMRANGLEARC
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ struct _POINTL ptlCenter;
  /* 0x0010 */ unsigned long nRadius;
  /* 0x0014 */ float eStartAngle;
  /* 0x0018 */ float eSweepAngle;
}; /* size: 0x001c */

