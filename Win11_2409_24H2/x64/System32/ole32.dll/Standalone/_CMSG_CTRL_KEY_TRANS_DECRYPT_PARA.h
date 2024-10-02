typedef struct _CMSG_CTRL_KEY_TRANS_DECRYPT_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  union
  {
    /* 0x0008 */ unsigned __int64 hCryptProv;
    /* 0x0008 */ unsigned __int64 hNCryptKey;
  }; /* size: 0x0008 */
  /* 0x0010 */ unsigned long dwKeySpec;
  /* 0x0018 */ struct _CMSG_KEY_TRANS_RECIPIENT_INFO* pKeyTrans;
  /* 0x0020 */ unsigned long dwRecipientIndex;
  /* 0x0024 */ long __PADDING__[1];
} CMSG_CTRL_KEY_TRANS_DECRYPT_PARA, *PCMSG_CTRL_KEY_TRANS_DECRYPT_PARA; /* size: 0x0028 */

