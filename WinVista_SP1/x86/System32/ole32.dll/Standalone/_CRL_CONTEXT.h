typedef struct _CRL_CONTEXT
{
  /* 0x0000 */ unsigned long dwCertEncodingType;
  /* 0x0004 */ unsigned char* pbCrlEncoded;
  /* 0x0008 */ unsigned long cbCrlEncoded;
  /* 0x000c */ struct _CRL_INFO* pCrlInfo;
  /* 0x0010 */ void* hCertStore;
} CRL_CONTEXT, *PCRL_CONTEXT; /* size: 0x0014 */

