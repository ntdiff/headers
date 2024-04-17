typedef struct _CMSG_CTRL_KEY_TRANS_DECRYPT_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  union
  {
    /* 0x0004 */ unsigned long hCryptProv;
    /* 0x0004 */ unsigned long hNCryptKey;
  }; /* size: 0x0004 */
  /* 0x0008 */ unsigned long dwKeySpec;
  /* 0x000c */ struct _CMSG_KEY_TRANS_RECIPIENT_INFO* pKeyTrans;
  /* 0x0010 */ unsigned long dwRecipientIndex;
} CMSG_CTRL_KEY_TRANS_DECRYPT_PARA, *PCMSG_CTRL_KEY_TRANS_DECRYPT_PARA; /* size: 0x0014 */

