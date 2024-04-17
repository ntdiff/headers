typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

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

typedef struct _NDIS_TIMESTAMP_CAPABILITIES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0008 */ unsigned __int64 HardwareClockFrequencyHz;
  /* 0x0010 */ unsigned char CrossTimestamp;
  /* 0x0018 */ unsigned __int64 Reserved1;
  /* 0x0020 */ unsigned __int64 Reserved2;
  /* 0x0028 */ struct _NDIS_TIMESTAMP_CAPABILITY_FLAGS TimestampFlags;
  /* 0x0036 */ char __PADDING__[2];
} NDIS_TIMESTAMP_CAPABILITIES, *PNDIS_TIMESTAMP_CAPABILITIES; /* size: 0x0038 */

