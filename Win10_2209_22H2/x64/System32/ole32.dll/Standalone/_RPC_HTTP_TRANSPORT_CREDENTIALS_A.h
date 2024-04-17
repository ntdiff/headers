typedef struct _RPC_HTTP_TRANSPORT_CREDENTIALS_A
{
  /* 0x0000 */ struct _SEC_WINNT_AUTH_IDENTITY_A* TransportCredentials;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long AuthenticationTarget;
  /* 0x0010 */ unsigned long NumberOfAuthnSchemes;
  /* 0x0018 */ unsigned long* AuthnSchemes;
  /* 0x0020 */ unsigned char* ServerCertificateSubject;
} RPC_HTTP_TRANSPORT_CREDENTIALS_A, *PRPC_HTTP_TRANSPORT_CREDENTIALS_A; /* size: 0x0028 */

