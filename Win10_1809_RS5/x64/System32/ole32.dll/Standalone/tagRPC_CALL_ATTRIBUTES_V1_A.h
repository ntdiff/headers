struct tagRPC_CALL_ATTRIBUTES_V1_A
{
  /* 0x0000 */ unsigned int Version;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long ServerPrincipalNameBufferLength;
  /* 0x0010 */ unsigned char* ServerPrincipalName;
  /* 0x0018 */ unsigned long ClientPrincipalNameBufferLength;
  /* 0x0020 */ unsigned char* ClientPrincipalName;
  /* 0x0028 */ unsigned long AuthenticationLevel;
  /* 0x002c */ unsigned long AuthenticationService;
  /* 0x0030 */ int NullSession;
  /* 0x0034 */ long __PADDING__[1];
}; /* size: 0x0038 */

