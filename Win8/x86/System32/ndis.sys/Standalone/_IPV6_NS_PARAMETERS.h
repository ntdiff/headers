typedef struct _IPV6_NS_PARAMETERS
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned char RemoteIPv6Address[16];
  /* 0x0014 */ unsigned char SolicitedNodeIPv6Address[16];
  /* 0x0024 */ unsigned char MacAddress[6];
  /* 0x002a */ unsigned char TargetIPv6Addresses[16][2];
  /* 0x004a */ char __PADDING__[2];
} IPV6_NS_PARAMETERS, *PIPV6_NS_PARAMETERS; /* size: 0x004c */

