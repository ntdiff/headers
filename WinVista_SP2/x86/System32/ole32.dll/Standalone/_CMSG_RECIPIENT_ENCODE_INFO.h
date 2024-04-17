typedef struct _CMSG_RECIPIENT_ENCODE_INFO
{
  /* 0x0000 */ unsigned long dwRecipientChoice;
  union
  {
    /* 0x0004 */ struct _CMSG_KEY_TRANS_RECIPIENT_ENCODE_INFO* pKeyTrans;
    /* 0x0004 */ struct _CMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO* pKeyAgree;
    /* 0x0004 */ struct _CMSG_MAIL_LIST_RECIPIENT_ENCODE_INFO* pMailList;
  }; /* size: 0x0004 */
} CMSG_RECIPIENT_ENCODE_INFO, *PCMSG_RECIPIENT_ENCODE_INFO; /* size: 0x0008 */

