typedef struct _NCRYPT_KEY_BLOB_HEADER
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwMagic;
  /* 0x0008 */ unsigned long cbAlgName;
  /* 0x000c */ unsigned long cbKeyData;
} NCRYPT_KEY_BLOB_HEADER, *PNCRYPT_KEY_BLOB_HEADER; /* size: 0x0010 */

