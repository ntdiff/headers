typedef struct _BCRYPT_RSAKEY_BLOB
{
  /* 0x0000 */ unsigned long Magic;
  /* 0x0004 */ unsigned long BitLength;
  /* 0x0008 */ unsigned long cbPublicExp;
  /* 0x000c */ unsigned long cbModulus;
  /* 0x0010 */ unsigned long cbPrime1;
  /* 0x0014 */ unsigned long cbPrime2;
} BCRYPT_RSAKEY_BLOB, *PBCRYPT_RSAKEY_BLOB; /* size: 0x0018 */

