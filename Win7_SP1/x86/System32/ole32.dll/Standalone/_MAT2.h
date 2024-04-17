typedef struct _FIXED
{
  /* 0x0000 */ unsigned short fract;
  /* 0x0002 */ short value;
} FIXED, *PFIXED; /* size: 0x0004 */

typedef struct _MAT2
{
  /* 0x0000 */ struct _FIXED eM11;
  /* 0x0004 */ struct _FIXED eM12;
  /* 0x0008 */ struct _FIXED eM21;
  /* 0x000c */ struct _FIXED eM22;
} MAT2, *PMAT2; /* size: 0x0010 */

