typedef struct _RPC_HTTP_TRANSPORT_CREDENTIALS_V2_W
{
  /* 0x0000 */ struct _SEC_WINNT_AUTH_IDENTITY_W* TransportCredentials;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long AuthenticationTarget;
  /* 0x000c */ unsigned long NumberOfAuthnSchemes;
  /* 0x0010 */ unsigned long* AuthnSchemes;
  /* 0x0014 */ wchar_t* ServerCertificateSubject;
  /* 0x0018 */ struct _SEC_WINNT_AUTH_IDENTITY_W* ProxyCredentials;
  /* 0x001c */ unsigned long NumberOfProxyAuthnSchemes;
  /* 0x0020 */ unsigned long* ProxyAuthnSchemes;
} RPC_HTTP_TRANSPORT_CREDENTIALS_V2_W, *PRPC_HTTP_TRANSPORT_CREDENTIALS_V2_W; /* size: 0x0024 */

