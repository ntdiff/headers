typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0008 */

typedef struct _CRYPT_ALGORITHM_IDENTIFIER
{
  /* 0x0000 */ char* pszObjId;
  /* 0x0004 */ struct _CRYPTOAPI_BLOB Parameters;
} CRYPT_ALGORITHM_IDENTIFIER, *PCRYPT_ALGORITHM_IDENTIFIER; /* size: 0x000c */

typedef struct _CRYPT_MASK_GEN_ALGORITHM
{
  /* 0x0000 */ char* pszObjId;
  /* 0x0004 */ struct _CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
} CRYPT_MASK_GEN_ALGORITHM, *PCRYPT_MASK_GEN_ALGORITHM; /* size: 0x0010 */

typedef struct _CRYPT_PSOURCE_ALGORITHM
{
  /* 0x0000 */ char* pszObjId;
  /* 0x0004 */ struct _CRYPTOAPI_BLOB EncodingParameters;
} CRYPT_PSOURCE_ALGORITHM, *PCRYPT_PSOURCE_ALGORITHM; /* size: 0x000c */

typedef struct _CRYPT_RSAES_OAEP_PARAMETERS
{
  /* 0x0000 */ struct _CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
  /* 0x000c */ struct _CRYPT_MASK_GEN_ALGORITHM MaskGenAlgorithm;
  /* 0x001c */ struct _CRYPT_PSOURCE_ALGORITHM PSourceAlgorithm;
} CRYPT_RSAES_OAEP_PARAMETERS, *PCRYPT_RSAES_OAEP_PARAMETERS; /* size: 0x0028 */

