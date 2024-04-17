typedef struct _CERT_CONTEXT
{
  /* 0x0000 */ unsigned long dwCertEncodingType;
  /* 0x0008 */ unsigned char* pbCertEncoded;
  /* 0x0010 */ unsigned long cbCertEncoded;
  /* 0x0018 */ struct _CERT_INFO* pCertInfo;
  /* 0x0020 */ void* hCertStore;
} CERT_CONTEXT, *PCERT_CONTEXT; /* size: 0x0028 */

