typedef struct _RPC_HTTP_TRANSPORT_CREDENTIALS_V2_A
{
  /* 0x0000 */ struct _SEC_WINNT_AUTH_IDENTITY_A* TransportCredentials;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long AuthenticationTarget;
  /* 0x000c */ unsigned long NumberOfAuthnSchemes;
  /* 0x0010 */ unsigned long* AuthnSchemes;
  /* 0x0014 */ unsigned char* ServerCertificateSubject;
  /* 0x0018 */ struct _SEC_WINNT_AUTH_IDENTITY_A* ProxyCredentials;
  /* 0x001c */ unsigned long NumberOfProxyAuthnSchemes;
  /* 0x0020 */ unsigned long* ProxyAuthnSchemes;
} RPC_HTTP_TRANSPORT_CREDENTIALS_V2_A, *PRPC_HTTP_TRANSPORT_CREDENTIALS_V2_A; /* size: 0x0024 */

