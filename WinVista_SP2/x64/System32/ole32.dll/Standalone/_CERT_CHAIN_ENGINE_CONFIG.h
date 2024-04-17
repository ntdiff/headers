typedef struct _CERT_CHAIN_ENGINE_CONFIG
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ void* hRestrictedRoot;
  /* 0x0010 */ void* hRestrictedTrust;
  /* 0x0018 */ void* hRestrictedOther;
  /* 0x0020 */ unsigned long cAdditionalStore;
  /* 0x0028 */ void** rghAdditionalStore;
  /* 0x0030 */ unsigned long dwFlags;
  /* 0x0034 */ unsigned long dwUrlRetrievalTimeout;
  /* 0x0038 */ unsigned long MaximumCachedCertificates;
  /* 0x003c */ unsigned long CycleDetectionModulus;
} CERT_CHAIN_ENGINE_CONFIG, *PCERT_CHAIN_ENGINE_CONFIG; /* size: 0x0040 */

