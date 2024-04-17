typedef struct _RPC_HTTP_TRANSPORT_CREDENTIALS_V3_W
{
  /* 0x0000 */ void* TransportCredentials;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long AuthenticationTarget;
  /* 0x0010 */ unsigned long NumberOfAuthnSchemes;
  /* 0x0018 */ unsigned long* AuthnSchemes;
  /* 0x0020 */ wchar_t* ServerCertificateSubject;
  /* 0x0028 */ void* ProxyCredentials;
  /* 0x0030 */ unsigned long NumberOfProxyAuthnSchemes;
  /* 0x0038 */ unsigned long* ProxyAuthnSchemes;
} RPC_HTTP_TRANSPORT_CREDENTIALS_V3_W, *PRPC_HTTP_TRANSPORT_CREDENTIALS_V3_W; /* size: 0x0040 */

