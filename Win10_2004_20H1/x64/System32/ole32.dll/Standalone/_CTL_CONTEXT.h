typedef struct _CTL_CONTEXT
{
  /* 0x0000 */ unsigned long dwMsgAndCertEncodingType;
  /* 0x0008 */ unsigned char* pbCtlEncoded;
  /* 0x0010 */ unsigned long cbCtlEncoded;
  /* 0x0018 */ struct _CTL_INFO* pCtlInfo;
  /* 0x0020 */ void* hCertStore;
  /* 0x0028 */ void* hCryptMsg;
  /* 0x0030 */ unsigned char* pbCtlContent;
  /* 0x0038 */ unsigned long cbCtlContent;
  /* 0x003c */ long __PADDING__[1];
} CTL_CONTEXT, *PCTL_CONTEXT; /* size: 0x0040 */

