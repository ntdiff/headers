typedef struct _CRYPT_VERIFY_MESSAGE_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwMsgAndCertEncodingType;
  /* 0x0008 */ unsigned long hCryptProv;
  /* 0x000c */ void* pfnGetSignerCertificate /* function */;
  /* 0x0010 */ void* pvGetArg;
} CRYPT_VERIFY_MESSAGE_PARA, *PCRYPT_VERIFY_MESSAGE_PARA; /* size: 0x0014 */

