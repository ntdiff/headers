typedef struct _CRYPT_DECRYPT_MESSAGE_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwMsgAndCertEncodingType;
  /* 0x0008 */ unsigned long cCertStore;
  /* 0x0010 */ void** rghCertStore;
} CRYPT_DECRYPT_MESSAGE_PARA, *PCRYPT_DECRYPT_MESSAGE_PARA; /* size: 0x0018 */

