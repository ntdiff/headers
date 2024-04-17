typedef struct _CERT_REVOCATION_CHAIN_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ void* hChainEngine;
  /* 0x0010 */ void* hAdditionalStore;
  /* 0x0018 */ unsigned long dwChainFlags;
  /* 0x001c */ unsigned long dwUrlRetrievalTimeout;
  /* 0x0020 */ struct _FILETIME* pftCurrentTime;
  /* 0x0028 */ struct _FILETIME* pftCacheResync;
  /* 0x0030 */ unsigned long cbMaxUrlRetrievalByteCount;
  /* 0x0034 */ long __PADDING__[1];
} CERT_REVOCATION_CHAIN_PARA, *PCERT_REVOCATION_CHAIN_PARA; /* size: 0x0038 */

