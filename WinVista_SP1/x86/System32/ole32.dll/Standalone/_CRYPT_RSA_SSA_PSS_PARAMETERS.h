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

typedef struct _CRYPT_RSA_SSA_PSS_PARAMETERS
{
  /* 0x0000 */ struct _CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
  /* 0x000c */ struct _CRYPT_MASK_GEN_ALGORITHM MaskGenAlgorithm;
  /* 0x001c */ unsigned long dwSaltLength;
  /* 0x0020 */ unsigned long dwTrailerField;
} CRYPT_RSA_SSA_PSS_PARAMETERS, *PCRYPT_RSA_SSA_PSS_PARAMETERS; /* size: 0x0024 */

