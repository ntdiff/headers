typedef struct _CRYPT_KEY_PROV_INFO
{
  /* 0x0000 */ wchar_t* pwszContainerName;
  /* 0x0004 */ wchar_t* pwszProvName;
  /* 0x0008 */ unsigned long dwProvType;
  /* 0x000c */ unsigned long dwFlags;
  /* 0x0010 */ unsigned long cProvParam;
  /* 0x0014 */ struct _CRYPT_KEY_PROV_PARAM* rgProvParam;
  /* 0x0018 */ unsigned long dwKeySpec;
} CRYPT_KEY_PROV_INFO, *PCRYPT_KEY_PROV_INFO; /* size: 0x001c */

typedef struct _CERT_CHAIN
{
  /* 0x0000 */ unsigned long cCerts;
  /* 0x0004 */ struct _CRYPTOAPI_BLOB* certs;
  /* 0x0008 */ struct _CRYPT_KEY_PROV_INFO keyLocatorInfo;
} CERT_CHAIN, *PCERT_CHAIN; /* size: 0x0024 */

