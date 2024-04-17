typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _CRYPTNET_URL_CACHE_RESPONSE_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned short wResponseType;
  /* 0x0006 */ unsigned short wResponseFlags;
  /* 0x0008 */ struct _FILETIME LastModifiedTime;
  /* 0x0010 */ unsigned long dwMaxAge;
  /* 0x0018 */ const wchar_t* pwszETag;
  /* 0x0020 */ unsigned long dwProxyId;
  /* 0x0024 */ long __PADDING__[1];
} CRYPTNET_URL_CACHE_RESPONSE_INFO, *PCRYPTNET_URL_CACHE_RESPONSE_INFO; /* size: 0x0028 */

