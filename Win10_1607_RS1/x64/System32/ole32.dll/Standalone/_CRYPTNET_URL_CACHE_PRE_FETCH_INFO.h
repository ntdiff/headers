typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _CRYPTNET_URL_CACHE_PRE_FETCH_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwObjectType;
  /* 0x0008 */ unsigned long dwError;
  /* 0x000c */ unsigned long dwReserved;
  /* 0x0010 */ struct _FILETIME ThisUpdateTime;
  /* 0x0018 */ struct _FILETIME NextUpdateTime;
  /* 0x0020 */ struct _FILETIME PublishTime;
} CRYPTNET_URL_CACHE_PRE_FETCH_INFO, *PCRYPTNET_URL_CACHE_PRE_FETCH_INFO; /* size: 0x0028 */

