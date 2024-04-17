typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0008 */

typedef struct _SPC_SERIALIZED_OBJECT
{
  /* 0x0000 */ unsigned char ClassId[16];
  /* 0x0010 */ struct _CRYPTOAPI_BLOB SerializedData;
} SPC_SERIALIZED_OBJECT, *PSPC_SERIALIZED_OBJECT; /* size: 0x0018 */

