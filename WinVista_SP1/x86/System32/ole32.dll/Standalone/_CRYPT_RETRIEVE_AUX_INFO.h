typedef struct _CRYPT_RETRIEVE_AUX_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ struct _FILETIME* pLastSyncTime;
  /* 0x0008 */ unsigned long dwMaxUrlRetrievalByteCount;
  /* 0x000c */ struct _CRYPTNET_URL_CACHE_PRE_FETCH_INFO* pPreFetchInfo;
  /* 0x0010 */ struct _CRYPTNET_URL_CACHE_FLUSH_INFO* pFlushInfo;
  /* 0x0014 */ struct _CRYPTNET_URL_CACHE_RESPONSE_INFO** ppResponseInfo;
  /* 0x0018 */ wchar_t* pwszCacheFileNamePrefix;
  /* 0x001c */ struct _FILETIME* pftCacheResync;
  /* 0x0020 */ int fProxyCacheRetrieval;
  /* 0x0024 */ unsigned long dwHttpStatusCode;
} CRYPT_RETRIEVE_AUX_INFO, *PCRYPT_RETRIEVE_AUX_INFO; /* size: 0x0028 */

