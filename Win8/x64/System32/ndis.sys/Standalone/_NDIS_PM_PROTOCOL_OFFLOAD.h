typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_PM_PROTOCOL_OFFLOAD_TYPE
{
  NdisPMProtocolOffloadIdUnspecified = 0,
  NdisPMProtocolOffloadIdIPv4ARP = 1,
  NdisPMProtocolOffloadIdIPv6NS = 2,
  NdisPMProtocolOffload80211RSNRekey = 3,
  NdisPMProtocolOffloadIdMaximum = 4,
} NDIS_PM_PROTOCOL_OFFLOAD_TYPE, *PNDIS_PM_PROTOCOL_OFFLOAD_TYPE;

typedef struct _NDIS_PM_COUNTED_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ wchar_t String[65];
} NDIS_PM_COUNTED_STRING, *PNDIS_PM_COUNTED_STRING; /* size: 0x0084 */

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

typedef struct _NDIS_PM_PROTOCOL_OFFLOAD
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long Priority;
  /* 0x000c */ enum _NDIS_PM_PROTOCOL_OFFLOAD_TYPE ProtocolOffloadType;
  /* 0x0010 */ struct _NDIS_PM_COUNTED_STRING FriendlyName;
  /* 0x0094 */ unsigned long ProtocolOffloadId;
  /* 0x0098 */ unsigned long NextProtocolOffloadOffset;
  /* 0x00a0 */ union _PROTOCOL_OFFLOAD_PARAMETERS ProtocolOffloadParameters;
} NDIS_PM_PROTOCOL_OFFLOAD, *PNDIS_PM_PROTOCOL_OFFLOAD; /* size: 0x00f0 */

