typedef struct _TIMEOUT_INFO
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0004 */ unsigned long dwConnectTimeout;
  /* 0x0008 */ unsigned long dwDataTimeout;
} TIMEOUT_INFO, *PTIMEOUT_INFO; /* size: 0x000c */

