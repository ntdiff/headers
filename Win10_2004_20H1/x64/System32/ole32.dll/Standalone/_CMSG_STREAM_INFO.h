typedef struct _CMSG_STREAM_INFO
{
  /* 0x0000 */ unsigned long cbContent;
  /* 0x0008 */ void* pfnStreamOutput /* function */;
  /* 0x0010 */ void* pvArg;
} CMSG_STREAM_INFO, *PCMSG_STREAM_INFO; /* size: 0x0018 */

