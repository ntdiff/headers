typedef struct _CMSG_CTRL_VERIFY_SIGNATURE_EX_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ unsigned __int64 hCryptProv;
  /* 0x0010 */ unsigned long dwSignerIndex;
  /* 0x0014 */ unsigned long dwSignerType;
  /* 0x0018 */ void* pvSigner;
} CMSG_CTRL_VERIFY_SIGNATURE_EX_PARA, *PCMSG_CTRL_VERIFY_SIGNATURE_EX_PARA; /* size: 0x0020 */

