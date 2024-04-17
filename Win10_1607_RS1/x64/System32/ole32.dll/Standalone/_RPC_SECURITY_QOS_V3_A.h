typedef struct _RPC_SECURITY_QOS_V3_A
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Capabilities;
  /* 0x0008 */ unsigned long IdentityTracking;
  /* 0x000c */ unsigned long ImpersonationType;
  /* 0x0010 */ unsigned long AdditionalSecurityInfoType;
  union
  {
    /* 0x0018 */ struct _RPC_HTTP_TRANSPORT_CREDENTIALS_A* HttpCredentials;
  } /* size: 0x0008 */ u;
  /* 0x0020 */ void* Sid;
} RPC_SECURITY_QOS_V3_A, *PRPC_SECURITY_QOS_V3_A; /* size: 0x0028 */

