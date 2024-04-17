typedef struct _CTL_CONTEXT
{
  /* 0x0000 */ unsigned long dwMsgAndCertEncodingType;
  /* 0x0004 */ unsigned char* pbCtlEncoded;
  /* 0x0008 */ unsigned long cbCtlEncoded;
  /* 0x000c */ struct _CTL_INFO* pCtlInfo;
  /* 0x0010 */ void* hCertStore;
  /* 0x0014 */ void* hCryptMsg;
  /* 0x0018 */ unsigned char* pbCtlContent;
  /* 0x001c */ unsigned long cbCtlContent;
} CTL_CONTEXT, *PCTL_CONTEXT; /* size: 0x0020 */

