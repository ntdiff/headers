typedef struct _CERT_CHAIN_ENGINE_CONFIG
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ void* hRestrictedRoot;
  /* 0x0008 */ void* hRestrictedTrust;
  /* 0x000c */ void* hRestrictedOther;
  /* 0x0010 */ unsigned long cAdditionalStore;
  /* 0x0014 */ void** rghAdditionalStore;
  /* 0x0018 */ unsigned long dwFlags;
  /* 0x001c */ unsigned long dwUrlRetrievalTimeout;
  /* 0x0020 */ unsigned long MaximumCachedCertificates;
  /* 0x0024 */ unsigned long CycleDetectionModulus;
} CERT_CHAIN_ENGINE_CONFIG, *PCERT_CHAIN_ENGINE_CONFIG; /* size: 0x0028 */

