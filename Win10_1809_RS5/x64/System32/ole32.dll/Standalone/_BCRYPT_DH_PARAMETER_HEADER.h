typedef struct _BCRYPT_DH_PARAMETER_HEADER
{
  /* 0x0000 */ unsigned long cbLength;
  /* 0x0004 */ unsigned long dwMagic;
  /* 0x0008 */ unsigned long cbKeyLength;
} BCRYPT_DH_PARAMETER_HEADER, *PBCRYPT_DH_PARAMETER_HEADER; /* size: 0x000c */

