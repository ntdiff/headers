typedef struct _RPC_SECURITY_QOS
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Capabilities;
  /* 0x0008 */ unsigned long IdentityTracking;
  /* 0x000c */ unsigned long ImpersonationType;
} RPC_SECURITY_QOS, *PRPC_SECURITY_QOS; /* size: 0x0010 */

