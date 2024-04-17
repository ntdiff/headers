typedef struct _CMSG_SIGNED_ENCODE_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long cSigners;
  /* 0x0008 */ struct _CMSG_SIGNER_ENCODE_INFO* rgSigners;
  /* 0x000c */ unsigned long cCertEncoded;
  /* 0x0010 */ struct _CRYPTOAPI_BLOB* rgCertEncoded;
  /* 0x0014 */ unsigned long cCrlEncoded;
  /* 0x0018 */ struct _CRYPTOAPI_BLOB* rgCrlEncoded;
} CMSG_SIGNED_ENCODE_INFO, *PCMSG_SIGNED_ENCODE_INFO; /* size: 0x001c */

