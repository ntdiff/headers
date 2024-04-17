typedef struct _CRYPT_URL_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwSyncDeltaTime;
  /* 0x0008 */ unsigned long cGroup;
  /* 0x0010 */ unsigned long* rgcGroupEntry;
} CRYPT_URL_INFO, *PCRYPT_URL_INFO; /* size: 0x0018 */

