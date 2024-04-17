typedef struct _SCARD_ATRMASK
{
  /* 0x0000 */ unsigned long cbAtr;
  /* 0x0004 */ unsigned char rgbAtr[36];
  /* 0x0028 */ unsigned char rgbMask[36];
} SCARD_ATRMASK, *PSCARD_ATRMASK; /* size: 0x004c */

