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

