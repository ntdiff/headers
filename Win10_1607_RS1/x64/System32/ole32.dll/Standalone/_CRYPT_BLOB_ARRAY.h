typedef struct _CRYPT_BLOB_ARRAY
{
  /* 0x0000 */ unsigned long cBlob;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB* rgBlob;
} CRYPT_BLOB_ARRAY, *PCRYPT_BLOB_ARRAY; /* size: 0x0010 */

