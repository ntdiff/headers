typedef struct _BCRYPT_KEY_DATA_BLOB_HEADER
{
  /* 0x0000 */ unsigned long dwMagic;
  /* 0x0004 */ unsigned long dwVersion;
  /* 0x0008 */ unsigned long cbKeyData;
} BCRYPT_KEY_DATA_BLOB_HEADER, *PBCRYPT_KEY_DATA_BLOB_HEADER; /* size: 0x000c */

