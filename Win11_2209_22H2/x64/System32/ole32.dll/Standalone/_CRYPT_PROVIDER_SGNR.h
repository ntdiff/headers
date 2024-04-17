typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _CRYPT_PROVIDER_SGNR
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0004 */ struct _FILETIME sftVerifyAsOf;
  /* 0x000c */ unsigned long csCertChain;
  /* 0x0010 */ struct _CRYPT_PROVIDER_CERT* pasCertChain;
  /* 0x0018 */ unsigned long dwSignerType;
  /* 0x0020 */ struct _CMSG_SIGNER_INFO* psSigner;
  /* 0x0028 */ unsigned long dwError;
  /* 0x002c */ unsigned long csCounterSigners;
  /* 0x0030 */ struct _CRYPT_PROVIDER_SGNR* pasCounterSigners;
  /* 0x0038 */ const struct _CERT_CHAIN_CONTEXT* pChainContext;
} CRYPT_PROVIDER_SGNR, *PCRYPT_PROVIDER_SGNR; /* size: 0x0040 */

