typedef struct _CMSG_CTRL_MAIL_LIST_DECRYPT_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ unsigned __int64 hCryptProv;
  /* 0x0010 */ struct _CMSG_MAIL_LIST_RECIPIENT_INFO* pMailList;
  /* 0x0018 */ unsigned long dwRecipientIndex;
  /* 0x001c */ unsigned long dwKeyChoice;
  union
  {
    /* 0x0020 */ unsigned __int64 hKeyEncryptionKey;
    /* 0x0020 */ void* pvKeyEncryptionKey;
  }; /* size: 0x0008 */
} CMSG_CTRL_MAIL_LIST_DECRYPT_PARA, *PCMSG_CTRL_MAIL_LIST_DECRYPT_PARA; /* size: 0x0028 */

