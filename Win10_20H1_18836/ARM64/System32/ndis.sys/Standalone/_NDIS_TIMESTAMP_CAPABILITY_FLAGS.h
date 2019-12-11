typedef struct _NDIS_TIMESTAMP_CAPABILITY_FLAGS
{
  /* 0x0000 */ unsigned char PtpV2OverUdpIPv4EventMsgReceiveHw;
  /* 0x0001 */ unsigned char PtpV2OverUdpIPv4AllMsgReceiveHw;
  /* 0x0002 */ unsigned char PtpV2OverUdpIPv4EventMsgTransmitHw;
  /* 0x0003 */ unsigned char PtpV2OverUdpIPv4AllMsgTransmitHw;
  /* 0x0004 */ unsigned char PtpV2OverUdpIPv6EventMsgReceiveHw;
  /* 0x0005 */ unsigned char PtpV2OverUdpIPv6AllMsgReceiveHw;
  /* 0x0006 */ unsigned char PtpV2OverUdpIPv6EventMsgTransmitHw;
  /* 0x0007 */ unsigned char PtpV2OverUdpIPv6AllMsgTransmitHw;
  /* 0x0008 */ unsigned char AllReceiveHw;
  /* 0x0009 */ unsigned char AllTransmitHw;
  /* 0x000a */ unsigned char TaggedTransmitHw;
  /* 0x000b */ unsigned char AllReceiveSw;
  /* 0x000c */ unsigned char AllTransmitSw;
  /* 0x000d */ unsigned char TaggedTransmitSw;
} NDIS_TIMESTAMP_CAPABILITY_FLAGS, *PNDIS_TIMESTAMP_CAPABILITY_FLAGS; /* size: 0x000e */

