typedef struct _CERT_SERVER_OCSP_RESPONSE_CONTEXT
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ unsigned char* pbEncodedOcspResponse;
  /* 0x0010 */ unsigned long cbEncodedOcspResponse;
  /* 0x0014 */ long __PADDING__[1];
} CERT_SERVER_OCSP_RESPONSE_CONTEXT, *PCERT_SERVER_OCSP_RESPONSE_CONTEXT; /* size: 0x0018 */

