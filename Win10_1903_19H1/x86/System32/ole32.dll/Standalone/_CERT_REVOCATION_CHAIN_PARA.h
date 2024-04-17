typedef struct _CERT_REVOCATION_CHAIN_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ void* hChainEngine;
  /* 0x0008 */ void* hAdditionalStore;
  /* 0x000c */ unsigned long dwChainFlags;
  /* 0x0010 */ unsigned long dwUrlRetrievalTimeout;
  /* 0x0014 */ struct _FILETIME* pftCurrentTime;
  /* 0x0018 */ struct _FILETIME* pftCacheResync;
  /* 0x001c */ unsigned long cbMaxUrlRetrievalByteCount;
} CERT_REVOCATION_CHAIN_PARA, *PCERT_REVOCATION_CHAIN_PARA; /* size: 0x0020 */

