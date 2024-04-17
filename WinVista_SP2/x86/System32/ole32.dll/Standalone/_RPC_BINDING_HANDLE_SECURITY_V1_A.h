typedef struct _RPC_BINDING_HANDLE_SECURITY_V1_A
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned char* ServerPrincName;
  /* 0x0008 */ unsigned long AuthnLevel;
  /* 0x000c */ unsigned long AuthnSvc;
  /* 0x0010 */ struct _SEC_WINNT_AUTH_IDENTITY_A* AuthIdentity;
  /* 0x0014 */ struct _RPC_SECURITY_QOS* SecurityQos;
} RPC_BINDING_HANDLE_SECURITY_V1_A, *PRPC_BINDING_HANDLE_SECURITY_V1_A; /* size: 0x0018 */

