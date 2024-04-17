typedef struct _SCHANNEL_ALG
{
  /* 0x0000 */ unsigned long dwUse;
  /* 0x0004 */ unsigned int Algid;
  /* 0x0008 */ unsigned long cBits;
  /* 0x000c */ unsigned long dwFlags;
  /* 0x0010 */ unsigned long dwReserved;
} SCHANNEL_ALG, *PSCHANNEL_ALG; /* size: 0x0014 */

