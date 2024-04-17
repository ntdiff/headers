typedef enum _NDIS_FRAME_HEADER
{
  NdisFrameHeaderUndefined = 0,
  NdisFrameHeaderMac = 1,
  NdisFrameHeaderArp = 2,
  NdisFrameHeaderIPv4 = 3,
  NdisFrameHeaderIPv6 = 4,
  NdisFrameHeaderUdp = 5,
  NdisFrameHeaderMaximum = 6,
} NDIS_FRAME_HEADER, *PNDIS_FRAME_HEADER;

