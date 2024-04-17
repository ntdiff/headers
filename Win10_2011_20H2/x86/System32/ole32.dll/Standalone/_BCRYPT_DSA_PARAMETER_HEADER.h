typedef struct _BCRYPT_DSA_PARAMETER_HEADER
{
  /* 0x0000 */ unsigned long cbLength;
  /* 0x0004 */ unsigned long dwMagic;
  /* 0x0008 */ unsigned long cbKeyLength;
  /* 0x000c */ unsigned char Count[4];
  /* 0x0010 */ unsigned char Seed[20];
  /* 0x0024 */ unsigned char q[20];
} BCRYPT_DSA_PARAMETER_HEADER, *PBCRYPT_DSA_PARAMETER_HEADER; /* size: 0x0038 */

