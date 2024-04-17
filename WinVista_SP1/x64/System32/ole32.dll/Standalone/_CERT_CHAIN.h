typedef struct _CRYPT_KEY_PROV_INFO
{
  /* 0x0000 */ wchar_t* pwszContainerName;
  /* 0x0008 */ wchar_t* pwszProvName;
  /* 0x0010 */ unsigned long dwProvType;
  /* 0x0014 */ unsigned long dwFlags;
  /* 0x0018 */ unsigned long cProvParam;
  /* 0x0020 */ struct _CRYPT_KEY_PROV_PARAM* rgProvParam;
  /* 0x0028 */ unsigned long dwKeySpec;
  /* 0x002c */ long __PADDING__[1];
} CRYPT_KEY_PROV_INFO, *PCRYPT_KEY_PROV_INFO; /* size: 0x0030 */

typedef struct _CERT_CHAIN
{
  /* 0x0000 */ unsigned long cCerts;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB* certs;
  /* 0x0010 */ struct _CRYPT_KEY_PROV_INFO keyLocatorInfo;
} CERT_CHAIN, *PCERT_CHAIN; /* size: 0x0040 */

