typedef struct _BCRYPT_DSA_KEY_BLOB
{
  /* 0x0000 */ unsigned long dwMagic;
  /* 0x0004 */ unsigned long cbKey;
  /* 0x0008 */ unsigned char Count[4];
  /* 0x000c */ unsigned char Seed[20];
  /* 0x0020 */ unsigned char q[20];
} BCRYPT_DSA_KEY_BLOB, *PBCRYPT_DSA_KEY_BLOB; /* size: 0x0034 */

