typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0010 */

typedef struct _CRYPT_VERIFY_CERT_SIGN_STRONG_PROPERTIES_INFO
{
  /* 0x0000 */ struct _CRYPTOAPI_BLOB CertSignHashCNGAlgPropData;
  /* 0x0010 */ struct _CRYPTOAPI_BLOB CertIssuerPubKeyBitLengthPropData;
} CRYPT_VERIFY_CERT_SIGN_STRONG_PROPERTIES_INFO, *PCRYPT_VERIFY_CERT_SIGN_STRONG_PROPERTIES_INFO; /* size: 0x0020 */

