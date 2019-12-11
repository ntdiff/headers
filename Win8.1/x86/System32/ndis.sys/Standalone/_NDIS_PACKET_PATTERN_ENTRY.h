typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _NDIS_PM_PACKET_PATTERN
{
  /* 0x0000 */ unsigned long Priority;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned long MaskSize;
  /* 0x000c */ unsigned long PatternOffset;
  /* 0x0010 */ unsigned long PatternSize;
  /* 0x0014 */ unsigned long PatternFlags;
} NDIS_PM_PACKET_PATTERN, *PNDIS_PM_PACKET_PATTERN; /* size: 0x0018 */

typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_PM_WOL_PACKET
{
  NdisPMWoLPacketUnspecified = 0,
  NdisPMWoLPacketBitmapPattern = 1,
  NdisPMWoLPacketMagicPacket = 2,
  NdisPMWoLPacketIPv4TcpSyn = 3,
  NdisPMWoLPacketIPv6TcpSyn = 4,
  NdisPMWoLPacketEapolRequestIdMessage = 5,
  NdisPMWoLPacketMaximum = 6,
} NDIS_PM_WOL_PACKET, *PNDIS_PM_WOL_PACKET;

typedef struct _NDIS_PM_COUNTED_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ wchar_t String[65];
} NDIS_PM_COUNTED_STRING, *PNDIS_PM_COUNTED_STRING; /* size: 0x0084 */

typedef struct _NDIS_PM_WOL_PATTERN::_WOL_PATTERN::_IPV4_TCP_SYN_WOL_PACKET_PARAMETERS
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned char IPv4SourceAddress[4];
  /* 0x0008 */ unsigned char IPv4DestAddress[4];
  /* 0x000c */ unsigned short TCPSourcePortNumber;
  /* 0x000e */ unsigned short TCPDestPortNumber;
} NDIS_PM_WOL_PATTERN::_WOL_PATTERN::_IPV4_TCP_SYN_WOL_PACKET_PARAMETERS, *PNDIS_PM_WOL_PATTERN::_WOL_PATTERN::_IPV4_TCP_SYN_WOL_PACKET_PARAMETERS; /* size: 0x0010 */

typedef struct _NDIS_PM_WOL_PATTERN::_WOL_PATTERN::_IPV6_TCP_SYN_WOL_PACKET_PARAMETERS
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned char IPv6SourceAddress[16];
  /* 0x0014 */ unsigned char IPv6DestAddress[16];
  /* 0x0024 */ unsigned short TCPSourcePortNumber;
  /* 0x0026 */ unsigned short TCPDestPortNumber;
} NDIS_PM_WOL_PATTERN::_WOL_PATTERN::_IPV6_TCP_SYN_WOL_PACKET_PARAMETERS, *PNDIS_PM_WOL_PATTERN::_WOL_PATTERN::_IPV6_TCP_SYN_WOL_PACKET_PARAMETERS; /* size: 0x0028 */

typedef struct _NDIS_PM_WOL_PATTERN::_WOL_PATTERN::_EAPOL_REQUEST_ID_MESSAGE_WOL_PACKET_PARAMETERS
{
  /* 0x0000 */ unsigned long Flags;
} NDIS_PM_WOL_PATTERN::_WOL_PATTERN::_EAPOL_REQUEST_ID_MESSAGE_WOL_PACKET_PARAMETERS, *PNDIS_PM_WOL_PATTERN::_WOL_PATTERN::_EAPOL_REQUEST_ID_MESSAGE_WOL_PACKET_PARAMETERS; /* size: 0x0004 */

typedef struct _NDIS_PM_WOL_PATTERN::_WOL_PATTERN::_WOL_BITMAP_PATTERN
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long MaskOffset;
  /* 0x0008 */ unsigned long MaskSize;
  /* 0x000c */ unsigned long PatternOffset;
  /* 0x0010 */ unsigned long PatternSize;
} NDIS_PM_WOL_PATTERN::_WOL_PATTERN::_WOL_BITMAP_PATTERN, *PNDIS_PM_WOL_PATTERN::_WOL_PATTERN::_WOL_BITMAP_PATTERN; /* size: 0x0014 */

typedef union _NDIS_PM_WOL_PATTERN::_WOL_PATTERN
{
  union
  {
    /* 0x0000 */ struct _NDIS_PM_WOL_PATTERN::_WOL_PATTERN::_IPV4_TCP_SYN_WOL_PACKET_PARAMETERS IPv4TcpSynParameters;
    /* 0x0000 */ struct _NDIS_PM_WOL_PATTERN::_WOL_PATTERN::_IPV6_TCP_SYN_WOL_PACKET_PARAMETERS IPv6TcpSynParameters;
    /* 0x0000 */ struct _NDIS_PM_WOL_PATTERN::_WOL_PATTERN::_EAPOL_REQUEST_ID_MESSAGE_WOL_PACKET_PARAMETERS EapolRequestIdMessageParameters;
    /* 0x0000 */ struct _NDIS_PM_WOL_PATTERN::_WOL_PATTERN::_WOL_BITMAP_PATTERN WoLBitMapPattern;
  }; /* size: 0x0028 */
} NDIS_PM_WOL_PATTERN::_WOL_PATTERN, *PNDIS_PM_WOL_PATTERN::_WOL_PATTERN; /* size: 0x0028 */

typedef struct _NDIS_PM_WOL_PATTERN
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long Priority;
  /* 0x000c */ enum _NDIS_PM_WOL_PACKET WoLPacketType;
  /* 0x0010 */ struct _NDIS_PM_COUNTED_STRING FriendlyName;
  /* 0x0094 */ unsigned long PatternId;
  /* 0x0098 */ unsigned long NextWoLPatternOffset;
  /* 0x009c */ union _NDIS_PM_WOL_PATTERN::_WOL_PATTERN WoLPattern;
} NDIS_PM_WOL_PATTERN, *PNDIS_PM_WOL_PATTERN; /* size: 0x00c4 */

typedef enum _NDIS_PM_PROTOCOL_OFFLOAD_TYPE
{
  NdisPMProtocolOffloadIdUnspecified = 0,
  NdisPMProtocolOffloadIdIPv4ARP = 1,
  NdisPMProtocolOffloadIdIPv6NS = 2,
  NdisPMProtocolOffload80211RSNRekey = 3,
  NdisPMProtocolOffloadIdMaximum = 4,
} NDIS_PM_PROTOCOL_OFFLOAD_TYPE, *PNDIS_PM_PROTOCOL_OFFLOAD_TYPE;

typedef struct _NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS::_IPV4_ARP_PARAMETERS
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned char RemoteIPv4Address[4];
  /* 0x0008 */ unsigned char HostIPv4Address[4];
  /* 0x000c */ unsigned char MacAddress[6];
  /* 0x0012 */ char __PADDING__[2];
} NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS::_IPV4_ARP_PARAMETERS, *PNDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS::_IPV4_ARP_PARAMETERS; /* size: 0x0014 */

typedef struct _NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS::_IPV6_NS_PARAMETERS
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned char RemoteIPv6Address[16];
  /* 0x0014 */ unsigned char SolicitedNodeIPv6Address[16];
  /* 0x0024 */ unsigned char MacAddress[6];
  /* 0x002a */ unsigned char TargetIPv6Addresses[16][2];
  /* 0x004a */ char __PADDING__[2];
} NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS::_IPV6_NS_PARAMETERS, *PNDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS::_IPV6_NS_PARAMETERS; /* size: 0x004c */

typedef struct _NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS::_DOT11_RSN_REKEY_PARAMETERS
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned char KCK[16];
  /* 0x0014 */ unsigned char KEK[16];
  /* 0x0028 */ unsigned __int64 KeyReplayCounter;
} NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS::_DOT11_RSN_REKEY_PARAMETERS, *PNDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS::_DOT11_RSN_REKEY_PARAMETERS; /* size: 0x0030 */

typedef union _NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS
{
  union
  {
    /* 0x0000 */ struct _NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS::_IPV4_ARP_PARAMETERS IPv4ARPParameters;
    /* 0x0000 */ struct _NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS::_IPV6_NS_PARAMETERS IPv6NSParameters;
    /* 0x0000 */ struct _NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS::_DOT11_RSN_REKEY_PARAMETERS Dot11RSNRekeyParameters;
  }; /* size: 0x004c */
} NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS, *PNDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS; /* size: 0x0050 */

typedef struct _NDIS_PM_PROTOCOL_OFFLOAD
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long Priority;
  /* 0x000c */ enum _NDIS_PM_PROTOCOL_OFFLOAD_TYPE ProtocolOffloadType;
  /* 0x0010 */ struct _NDIS_PM_COUNTED_STRING FriendlyName;
  /* 0x0094 */ unsigned long ProtocolOffloadId;
  /* 0x0098 */ unsigned long NextProtocolOffloadOffset;
  /* 0x00a0 */ union _NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS ProtocolOffloadParameters;
} NDIS_PM_PROTOCOL_OFFLOAD, *PNDIS_PM_PROTOCOL_OFFLOAD; /* size: 0x00f0 */

typedef struct _NDIS_PACKET_PATTERN_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY Link;
  /* 0x0004 */ struct _SINGLE_LIST_ENTRY DupLink;
  /* 0x0008 */ unsigned long Size;
  /* 0x000c */ void* Source;
  /* 0x0010 */ unsigned long Priority;
  /* 0x0014 */ unsigned long EffectivePriority;
  /* 0x0018 */ unsigned long Id;
  /* 0x001c */ unsigned long PortNumber;
  union
  {
    /* 0x0020 */ struct _NDIS_PM_PACKET_PATTERN Pattern;
    /* 0x0020 */ struct _NDIS_PM_WOL_PATTERN WoLPattern;
    /* 0x0020 */ struct _NDIS_PM_PROTOCOL_OFFLOAD ProtocolOffload;
  }; /* size: 0x00f0 */
} NDIS_PACKET_PATTERN_ENTRY, *PNDIS_PACKET_PATTERN_ENTRY; /* size: 0x0110 */

