typedef struct _IPV4_ARP_PARAMETERS
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned char RemoteIPv4Address[4];
  /* 0x0008 */ unsigned char HostIPv4Address[4];
  /* 0x000c */ unsigned char MacAddress[6];
  /* 0x0012 */ char __PADDING__[2];
} IPV4_ARP_PARAMETERS, *PIPV4_ARP_PARAMETERS; /* size: 0x0014 */

