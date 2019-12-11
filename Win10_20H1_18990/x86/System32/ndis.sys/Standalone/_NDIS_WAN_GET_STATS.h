typedef struct _NDIS_WAN_GET_STATS
{
  /* 0x0000 */ unsigned char LocalAddress[6];
  /* 0x0008 */ unsigned long BytesSent;
  /* 0x000c */ unsigned long BytesRcvd;
  /* 0x0010 */ unsigned long FramesSent;
  /* 0x0014 */ unsigned long FramesRcvd;
  /* 0x0018 */ unsigned long CRCErrors;
  /* 0x001c */ unsigned long TimeoutErrors;
  /* 0x0020 */ unsigned long AlignmentErrors;
  /* 0x0024 */ unsigned long SerialOverrunErrors;
  /* 0x0028 */ unsigned long FramingErrors;
  /* 0x002c */ unsigned long BufferOverrunErrors;
  /* 0x0030 */ unsigned long BytesTransmittedUncompressed;
  /* 0x0034 */ unsigned long BytesReceivedUncompressed;
  /* 0x0038 */ unsigned long BytesTransmittedCompressed;
  /* 0x003c */ unsigned long BytesReceivedCompressed;
} NDIS_WAN_GET_STATS, *PNDIS_WAN_GET_STATS; /* size: 0x0040 */

