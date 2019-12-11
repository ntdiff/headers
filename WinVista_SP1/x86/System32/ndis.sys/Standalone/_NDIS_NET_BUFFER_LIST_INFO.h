typedef enum _NDIS_NET_BUFFER_LIST_INFO
{
  TcpIpChecksumNetBufferListInfo = 0,
  TcpOffloadBytesTransferred = 0,
  IPsecOffloadV1NetBufferListInfo = 1,
  IPsecOffloadV2NetBufferListInfo = 1,
  TcpLargeSendNetBufferListInfo = 2,
  TcpReceiveNoPush = 2,
  ClassificationHandleNetBufferListInfo = 3,
  Ieee8021QNetBufferListInfo = 4,
  NetBufferListCancelId = 5,
  MediaSpecificInformation = 6,
  NetBufferListFrameType = 7,
  NetBufferListProtocolId = 7,
  NetBufferListHashValue = 8,
  NetBufferListHashInfo = 9,
  WfpNetBufferListInfo = 10,
  IPsecOffloadV2TunnelNetBufferListInfo = 11,
  IPsecOffloadV2HeaderNetBufferListInfo = 12,
  MaxNetBufferListInfo = 13,
} NDIS_NET_BUFFER_LIST_INFO, *PNDIS_NET_BUFFER_LIST_INFO;

