typedef struct _NDIS_WAN_CO_GET_STATS_INFO
{
  /* 0x0000 */ unsigned long BytesSent;
  /* 0x0004 */ unsigned long BytesRcvd;
  /* 0x0008 */ unsigned long FramesSent;
  /* 0x000c */ unsigned long FramesRcvd;
  /* 0x0010 */ unsigned long CRCErrors;
  /* 0x0014 */ unsigned long TimeoutErrors;
  /* 0x0018 */ unsigned long AlignmentErrors;
  /* 0x001c */ unsigned long SerialOverrunErrors;
  /* 0x0020 */ unsigned long FramingErrors;
  /* 0x0024 */ unsigned long BufferOverrunErrors;
  /* 0x0028 */ unsigned long BytesTransmittedUncompressed;
  /* 0x002c */ unsigned long BytesReceivedUncompressed;
  /* 0x0030 */ unsigned long BytesTransmittedCompressed;
  /* 0x0034 */ unsigned long BytesReceivedCompressed;
  /* 0x0038 */ unsigned long TunnelPacketsRecieved;
  /* 0x003c */ unsigned long TunnelRecievePacketsPending;
  /* 0x0040 */ unsigned long TunnelPacketsIndicatedUp;
  /* 0x0044 */ unsigned long TunnelRecievePacketsRejected;
  /* 0x0048 */ unsigned long TunnelPacketsSent;
  /* 0x004c */ unsigned long TunnelPacketsSentComplete;
  /* 0x0050 */ unsigned long TunnelTransmitPacketsPending;
  /* 0x0054 */ unsigned long TunnelPacketsTransmitError;
  /* 0x0058 */ unsigned long TunnelPacketsSentError;
  /* 0x005c */ unsigned long TunnelTransmitPacketsRejected;
  /* 0x0060 */ unsigned long TunnelAcksSent;
  /* 0x0064 */ unsigned long TunnelAcksSentComplete;
  /* 0x0068 */ unsigned long TunnelGeneric1;
  /* 0x006c */ unsigned long TunnelGeneric2;
  /* 0x0070 */ unsigned long TunnelGeneric3;
} NDIS_WAN_CO_GET_STATS_INFO, *PNDIS_WAN_CO_GET_STATS_INFO; /* size: 0x0074 */

