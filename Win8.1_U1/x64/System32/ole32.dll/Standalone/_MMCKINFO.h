typedef struct _MMCKINFO
{
  /* 0x0000 */ unsigned long ckid;
  /* 0x0004 */ unsigned long cksize;
  /* 0x0008 */ unsigned long fccType;
  /* 0x000c */ unsigned long dwDataOffset;
  /* 0x0010 */ unsigned long dwFlags;
} MMCKINFO, *PMMCKINFO; /* size: 0x0014 */

