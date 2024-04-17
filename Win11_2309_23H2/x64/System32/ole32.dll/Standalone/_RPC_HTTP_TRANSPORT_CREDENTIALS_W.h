typedef struct _RPC_HTTP_TRANSPORT_CREDENTIALS_W
{
  /* 0x0000 */ struct _SEC_WINNT_AUTH_IDENTITY_W* TransportCredentials;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long AuthenticationTarget;
  /* 0x0010 */ unsigned long NumberOfAuthnSchemes;
  /* 0x0018 */ unsigned long* AuthnSchemes;
  /* 0x0020 */ unsigned short* ServerCertificateSubject;
} RPC_HTTP_TRANSPORT_CREDENTIALS_W, *PRPC_HTTP_TRANSPORT_CREDENTIALS_W; /* size: 0x0028 */

