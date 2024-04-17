typedef struct _CMSG_CTRL_MAIL_LIST_DECRYPT_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long hCryptProv;
  /* 0x0008 */ struct _CMSG_MAIL_LIST_RECIPIENT_INFO* pMailList;
  /* 0x000c */ unsigned long dwRecipientIndex;
  /* 0x0010 */ unsigned long dwKeyChoice;
  union
  {
    /* 0x0014 */ unsigned long hKeyEncryptionKey;
    /* 0x0014 */ void* pvKeyEncryptionKey;
  }; /* size: 0x0004 */
} CMSG_CTRL_MAIL_LIST_DECRYPT_PARA, *PCMSG_CTRL_MAIL_LIST_DECRYPT_PARA; /* size: 0x0018 */

