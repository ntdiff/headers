typedef struct _CRL_CONTEXT
{
  /* 0x0000 */ unsigned long dwCertEncodingType;
  /* 0x0008 */ unsigned char* pbCrlEncoded;
  /* 0x0010 */ unsigned long cbCrlEncoded;
  /* 0x0018 */ struct _CRL_INFO* pCrlInfo;
  /* 0x0020 */ void* hCertStore;
} CRL_CONTEXT, *PCRL_CONTEXT; /* size: 0x0028 */

