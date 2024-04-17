typedef struct _RPC_SECURITY_QOS_V4_W
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Capabilities;
  /* 0x0008 */ unsigned long IdentityTracking;
  /* 0x000c */ unsigned long ImpersonationType;
  /* 0x0010 */ unsigned long AdditionalSecurityInfoType;
  union
  {
    /* 0x0014 */ struct _RPC_HTTP_TRANSPORT_CREDENTIALS_W* HttpCredentials;
  } /* size: 0x0004 */ u;
  /* 0x0018 */ void* Sid;
  /* 0x001c */ unsigned int EffectiveOnly;
} RPC_SECURITY_QOS_V4_W, *PRPC_SECURITY_QOS_V4_W; /* size: 0x0020 */

