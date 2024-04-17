typedef struct _CMSG_CTRL_DECRYPT_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  union
  {
    /* 0x0008 */ unsigned __int64 hCryptProv;
    /* 0x0008 */ unsigned __int64 hNCryptKey;
  }; /* size: 0x0008 */
  /* 0x0010 */ unsigned long dwKeySpec;
  /* 0x0014 */ unsigned long dwRecipientIndex;
} CMSG_CTRL_DECRYPT_PARA, *PCMSG_CTRL_DECRYPT_PARA; /* size: 0x0018 */

