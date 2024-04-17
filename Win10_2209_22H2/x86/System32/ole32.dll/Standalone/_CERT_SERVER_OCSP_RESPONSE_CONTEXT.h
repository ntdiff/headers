typedef struct _CERT_SERVER_OCSP_RESPONSE_CONTEXT
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned char* pbEncodedOcspResponse;
  /* 0x0008 */ unsigned long cbEncodedOcspResponse;
} CERT_SERVER_OCSP_RESPONSE_CONTEXT, *PCERT_SERVER_OCSP_RESPONSE_CONTEXT; /* size: 0x000c */

