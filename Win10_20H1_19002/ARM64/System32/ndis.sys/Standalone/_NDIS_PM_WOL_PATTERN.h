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

