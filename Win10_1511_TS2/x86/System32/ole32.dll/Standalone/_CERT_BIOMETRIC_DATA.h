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

typedef struct _CERT_HASHED_URL
{
  /* 0x0000 */ struct _CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
  /* 0x000c */ struct _CRYPTOAPI_BLOB Hash;
  /* 0x0014 */ wchar_t* pwszUrl;
} CERT_HASHED_URL, *PCERT_HASHED_URL; /* size: 0x0018 */

typedef struct _CERT_BIOMETRIC_DATA
{
  /* 0x0000 */ unsigned long dwTypeOfBiometricDataChoice;
  union
  {
    /* 0x0004 */ unsigned long dwPredefined;
    /* 0x0004 */ char* pszObjId;
  }; /* size: 0x0004 */
  /* 0x0008 */ struct _CERT_HASHED_URL HashedUrl;
} CERT_BIOMETRIC_DATA, *PCERT_BIOMETRIC_DATA; /* size: 0x0020 */

