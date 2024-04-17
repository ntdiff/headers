typedef struct _CERT_SERVER_OCSP_RESPONSE_OPEN_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwFlags;
  /* 0x0008 */ unsigned long* pcbUsedSize;
  /* 0x000c */ wchar_t* pwszOcspDirectory;
  /* 0x0010 */ void* pfnUpdateCallback /* function */;
  /* 0x0014 */ void* pvUpdateCallbackArg;
} CERT_SERVER_OCSP_RESPONSE_OPEN_PARA, *PCERT_SERVER_OCSP_RESPONSE_OPEN_PARA; /* size: 0x0018 */

