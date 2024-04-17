typedef struct _CRYPT_GET_TIME_VALID_OBJECT_EXTRA_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ int iDeltaCrlIndicator;
  /* 0x0008 */ struct _FILETIME* pftCacheResync;
  /* 0x0010 */ struct _FILETIME* pLastSyncTime;
  /* 0x0018 */ struct _FILETIME* pMaxAgeTime;
} CRYPT_GET_TIME_VALID_OBJECT_EXTRA_INFO, *PCRYPT_GET_TIME_VALID_OBJECT_EXTRA_INFO; /* size: 0x0020 */

