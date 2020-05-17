typedef enum _NDIS_PER_PACKET_INFO
{
  TcpIpChecksumPacketInfo = 0,
  IpSecPacketInfo = 1,
  TcpLargeSendPacketInfo = 2,
  ClassificationHandlePacketInfo = 3,
  NdisReserved = 4,
  ScatterGatherListPacketInfo = 5,
  Ieee8021QInfo = 6,
  OriginalPacketInfo = 7,
  PacketCancelId = 8,
  OriginalNetBufferList = 9,
  CachedNetBufferList = 10,
  ShortPacketPaddingInfo = 11,
  MaxPerPacketInfo = 12,
} NDIS_PER_PACKET_INFO, *PNDIS_PER_PACKET_INFO;

