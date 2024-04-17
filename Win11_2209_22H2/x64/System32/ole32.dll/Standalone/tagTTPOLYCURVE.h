typedef struct _FIXED
{
  /* 0x0000 */ unsigned short fract;
  /* 0x0002 */ short value;
} FIXED, *PFIXED; /* size: 0x0004 */

struct tagPOINTFX
{
  /* 0x0000 */ struct _FIXED x;
  /* 0x0004 */ struct _FIXED y;
}; /* size: 0x0008 */

struct tagTTPOLYCURVE
{
  /* 0x0000 */ unsigned short wType;
  /* 0x0002 */ unsigned short cpfx;
  /* 0x0004 */ struct tagPOINTFX apfx[1];
}; /* size: 0x000c */

