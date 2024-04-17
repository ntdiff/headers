typedef struct _CRYPT_RETRIEVE_AUX_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ struct _FILETIME* pLastSyncTime;
  /* 0x0010 */ unsigned long dwMaxUrlRetrievalByteCount;
  /* 0x0018 */ struct _CRYPTNET_URL_CACHE_PRE_FETCH_INFO* pPreFetchInfo;
  /* 0x0020 */ struct _CRYPTNET_URL_CACHE_FLUSH_INFO* pFlushInfo;
  /* 0x0028 */ struct _CRYPTNET_URL_CACHE_RESPONSE_INFO** ppResponseInfo;
  /* 0x0030 */ wchar_t* pwszCacheFileNamePrefix;
  /* 0x0038 */ struct _FILETIME* pftCacheResync;
  /* 0x0040 */ int fProxyCacheRetrieval;
  /* 0x0044 */ unsigned long dwHttpStatusCode;
  /* 0x0048 */ wchar_t** ppwszErrorResponseHeaders;
  /* 0x0050 */ struct _CRYPTOAPI_BLOB** ppErrorContentBlob;
} CRYPT_RETRIEVE_AUX_INFO, *PCRYPT_RETRIEVE_AUX_INFO; /* size: 0x0058 */

