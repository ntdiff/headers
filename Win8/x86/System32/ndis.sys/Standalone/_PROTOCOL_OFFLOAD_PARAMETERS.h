typedef struct _IPV4_ARP_PARAMETERS
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned char RemoteIPv4Address[4];
  /* 0x0008 */ unsigned char HostIPv4Address[4];
  /* 0x000c */ unsigned char MacAddress[6];
  /* 0x0012 */ char __PADDING__[2];
} IPV4_ARP_PARAMETERS, *PIPV4_ARP_PARAMETERS; /* size: 0x0014 */

typedef struct _IPV6_NS_PARAMETERS
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned char RemoteIPv6Address[16];
  /* 0x0014 */ unsigned char SolicitedNodeIPv6Address[16];
  /* 0x0024 */ unsigned char MacAddress[6];
  /* 0x002a */ unsigned char TargetIPv6Addresses[16][2];
  /* 0x004a */ char __PADDING__[2];
} IPV6_NS_PARAMETERS, *PIPV6_NS_PARAMETERS; /* size: 0x004c */

typedef struct _DOT11_RSN_REKEY_PARAMETERS
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned char KCK[16];
  /* 0x0014 */ unsigned char KEK[16];
  /* 0x0028 */ unsigned __int64 KeyReplayCounter;
} DOT11_RSN_REKEY_PARAMETERS, *PDOT11_RSN_REKEY_PARAMETERS; /* size: 0x0030 */

typedef union _PROTOCOL_OFFLOAD_PARAMETERS
{
  union
  {
    /* 0x0000 */ struct _IPV4_ARP_PARAMETERS IPv4ARPParameters;
    /* 0x0000 */ struct _IPV6_NS_PARAMETERS IPv6NSParameters;
    /* 0x0000 */ struct _DOT11_RSN_REKEY_PARAMETERS Dot11RSNRekeyParameters;
  }; /* size: 0x004c */
} PROTOCOL_OFFLOAD_PARAMETERS, *PPROTOCOL_OFFLOAD_PARAMETERS; /* size: 0x0050 */

