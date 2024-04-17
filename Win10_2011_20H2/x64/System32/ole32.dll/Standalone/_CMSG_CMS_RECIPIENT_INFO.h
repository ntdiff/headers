typedef struct _CMSG_CMS_RECIPIENT_INFO
{
  /* 0x0000 */ unsigned long dwRecipientChoice;
  union
  {
    /* 0x0008 */ struct _CMSG_KEY_TRANS_RECIPIENT_INFO* pKeyTrans;
    /* 0x0008 */ struct _CMSG_KEY_AGREE_RECIPIENT_INFO* pKeyAgree;
    /* 0x0008 */ struct _CMSG_MAIL_LIST_RECIPIENT_INFO* pMailList;
  }; /* size: 0x0008 */
} CMSG_CMS_RECIPIENT_INFO, *PCMSG_CMS_RECIPIENT_INFO; /* size: 0x0010 */

