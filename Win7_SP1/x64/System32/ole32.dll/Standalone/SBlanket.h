typedef struct _RPC_SECURITY_QOS
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Capabilities;
  /* 0x0008 */ unsigned long IdentityTracking;
  /* 0x000c */ unsigned long ImpersonationType;
} RPC_SECURITY_QOS, *PRPC_SECURITY_QOS; /* size: 0x0010 */

typedef struct _SCHANNEL_CRED
{
  /* 0x0000 */ unsigned long dwVersion;
  /* 0x0004 */ unsigned long cCreds;
  /* 0x0008 */ const struct _CERT_CONTEXT** paCred;
  /* 0x0010 */ void* hRootStore;
  /* 0x0018 */ unsigned long cMappers;
  /* 0x0020 */ struct _HMAPPER** aphMappers;
  /* 0x0028 */ unsigned long cSupportedAlgs;
  /* 0x0030 */ unsigned int* palgSupportedAlgs;
  /* 0x0038 */ unsigned long grbitEnabledProtocols;
  /* 0x003c */ unsigned long dwMinimumCipherStrength;
  /* 0x0040 */ unsigned long dwMaximumCipherStrength;
  /* 0x0044 */ unsigned long dwSessionLifespan;
  /* 0x0048 */ unsigned long dwFlags;
  /* 0x004c */ unsigned long dwCredFormat;
} SCHANNEL_CRED, *PSCHANNEL_CRED; /* size: 0x0050 */

struct SBlanket
{
  /* 0x0000 */ wchar_t* _pPrincipal;
  /* 0x0008 */ unsigned long _lAuthnLevel;
  /* 0x000c */ unsigned long _lAuthnSvc;
  /* 0x0010 */ void* _pAuthId;
  /* 0x0018 */ unsigned long _lAuthzSvc;
  /* 0x001c */ struct _RPC_SECURITY_QOS _sQos;
  /* 0x002c */ unsigned long _lCapabilities;
  /* 0x0030 */ struct _SCHANNEL_CRED _sCred;
  /* 0x0080 */ const struct _CERT_CONTEXT* _pCert;
}; /* size: 0x0088 */

