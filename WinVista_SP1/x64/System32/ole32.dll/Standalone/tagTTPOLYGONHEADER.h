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

struct tagTTPOLYGONHEADER
{
  /* 0x0000 */ unsigned long cb;
  /* 0x0004 */ unsigned long dwType;
  /* 0x0008 */ struct tagPOINTFX pfxStart;
}; /* size: 0x0010 */

