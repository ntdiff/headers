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

struct tagEMRSETPIXELV
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ struct _POINTL ptlPixel;
  /* 0x0010 */ unsigned long crColor;
}; /* size: 0x0014 */

