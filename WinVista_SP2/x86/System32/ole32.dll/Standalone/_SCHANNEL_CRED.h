typedef struct _SCHANNEL_CRED
{
  /* 0x0000 */ unsigned long dwVersion;
  /* 0x0004 */ unsigned long cCreds;
  /* 0x0008 */ const struct _CERT_CONTEXT** paCred;
  /* 0x000c */ void* hRootStore;
  /* 0x0010 */ unsigned long cMappers;
  /* 0x0014 */ struct _HMAPPER** aphMappers;
  /* 0x0018 */ unsigned long cSupportedAlgs;
  /* 0x001c */ unsigned int* palgSupportedAlgs;
  /* 0x0020 */ unsigned long grbitEnabledProtocols;
  /* 0x0024 */ unsigned long dwMinimumCipherStrength;
  /* 0x0028 */ unsigned long dwMaximumCipherStrength;
  /* 0x002c */ unsigned long dwSessionLifespan;
  /* 0x0030 */ unsigned long dwFlags;
  /* 0x0034 */ unsigned long dwCredFormat;
} SCHANNEL_CRED, *PSCHANNEL_CRED; /* size: 0x0038 */

