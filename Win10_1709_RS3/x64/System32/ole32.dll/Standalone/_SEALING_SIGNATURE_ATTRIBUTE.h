typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0010 */

typedef struct _CRYPT_ALGORITHM_IDENTIFIER
{
  /* 0x0000 */ char* pszObjId;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB Parameters;
} CRYPT_ALGORITHM_IDENTIFIER, *PCRYPT_ALGORITHM_IDENTIFIER; /* size: 0x0018 */

typedef struct _SEALING_SIGNATURE_ATTRIBUTE
{
  /* 0x0000 */ unsigned long version;
  /* 0x0004 */ unsigned long signerIndex;
  /* 0x0008 */ struct _CRYPT_ALGORITHM_IDENTIFIER signatureAlgorithm;
  /* 0x0020 */ struct _CRYPTOAPI_BLOB encryptedDigest;
} SEALING_SIGNATURE_ATTRIBUTE, *PSEALING_SIGNATURE_ATTRIBUTE; /* size: 0x0030 */

