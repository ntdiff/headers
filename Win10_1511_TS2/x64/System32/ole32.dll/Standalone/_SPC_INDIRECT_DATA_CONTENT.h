typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0010 */

typedef struct _CRYPT_ATTRIBUTE_TYPE_VALUE
{
  /* 0x0000 */ char* pszObjId;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB Value;
} CRYPT_ATTRIBUTE_TYPE_VALUE, *PCRYPT_ATTRIBUTE_TYPE_VALUE; /* size: 0x0018 */

typedef struct _CRYPT_ALGORITHM_IDENTIFIER
{
  /* 0x0000 */ char* pszObjId;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB Parameters;
} CRYPT_ALGORITHM_IDENTIFIER, *PCRYPT_ALGORITHM_IDENTIFIER; /* size: 0x0018 */

typedef struct _SPC_INDIRECT_DATA_CONTENT
{
  /* 0x0000 */ struct _CRYPT_ATTRIBUTE_TYPE_VALUE Data;
  /* 0x0018 */ struct _CRYPT_ALGORITHM_IDENTIFIER DigestAlgorithm;
  /* 0x0030 */ struct _CRYPTOAPI_BLOB Digest;
} SPC_INDIRECT_DATA_CONTENT, *PSPC_INDIRECT_DATA_CONTENT; /* size: 0x0040 */

