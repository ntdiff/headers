typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _CRYPTNET_URL_CACHE_FLUSH_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwExemptSeconds;
  /* 0x0008 */ struct _FILETIME ExpireTime;
} CRYPTNET_URL_CACHE_FLUSH_INFO, *PCRYPTNET_URL_CACHE_FLUSH_INFO; /* size: 0x0010 */

