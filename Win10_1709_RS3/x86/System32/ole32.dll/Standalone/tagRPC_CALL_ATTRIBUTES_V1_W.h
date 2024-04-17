struct tagRPC_CALL_ATTRIBUTES_V1_W
{
  /* 0x0000 */ unsigned int Version;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long ServerPrincipalNameBufferLength;
  /* 0x000c */ unsigned short* ServerPrincipalName;
  /* 0x0010 */ unsigned long ClientPrincipalNameBufferLength;
  /* 0x0014 */ unsigned short* ClientPrincipalName;
  /* 0x0018 */ unsigned long AuthenticationLevel;
  /* 0x001c */ unsigned long AuthenticationService;
  /* 0x0020 */ int NullSession;
}; /* size: 0x0024 */

