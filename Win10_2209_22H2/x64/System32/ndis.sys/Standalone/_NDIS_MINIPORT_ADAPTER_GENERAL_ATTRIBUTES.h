typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_MEDIUM
{
  NdisMedium802_3 = 0,
  NdisMedium802_5 = 1,
  NdisMediumFddi = 2,
  NdisMediumWan = 3,
  NdisMediumLocalTalk = 4,
  NdisMediumDix = 5,
  NdisMediumArcnetRaw = 6,
  NdisMediumArcnet878_2 = 7,
  NdisMediumAtm = 8,
  NdisMediumWirelessWan = 9,
  NdisMediumIrda = 10,
  NdisMediumBpc = 11,
  NdisMediumCoWan = 12,
  NdisMedium1394 = 13,
  NdisMediumInfiniBand = 14,
  NdisMediumTunnel = 15,
  NdisMediumNative802_11 = 16,
  NdisMediumLoopback = 17,
  NdisMediumWiMAX = 18,
  NdisMediumIP = 19,
  NdisMediumMax = 20,
} NDIS_MEDIUM, *PNDIS_MEDIUM;

typedef enum _NDIS_PHYSICAL_MEDIUM
{
  NdisPhysicalMediumUnspecified = 0,
  NdisPhysicalMediumWirelessLan = 1,
  NdisPhysicalMediumCableModem = 2,
  NdisPhysicalMediumPhoneLine = 3,
  NdisPhysicalMediumPowerLine = 4,
  NdisPhysicalMediumDSL = 5,
  NdisPhysicalMediumFibreChannel = 6,
  NdisPhysicalMedium1394 = 7,
  NdisPhysicalMediumWirelessWan = 8,
  NdisPhysicalMediumNative802_11 = 9,
  NdisPhysicalMediumBluetooth = 10,
  NdisPhysicalMediumInfiniband = 11,
  NdisPhysicalMediumWiMax = 12,
  NdisPhysicalMediumUWB = 13,
  NdisPhysicalMedium802_3 = 14,
  NdisPhysicalMedium802_5 = 15,
  NdisPhysicalMediumIrda = 16,
  NdisPhysicalMediumWiredWAN = 17,
  NdisPhysicalMediumWiredCoWan = 18,
  NdisPhysicalMediumOther = 19,
  NdisPhysicalMediumNative802_15_4 = 20,
  NdisPhysicalMediumMax = 21,
} NDIS_PHYSICAL_MEDIUM, *PNDIS_PHYSICAL_MEDIUM;

typedef enum _NET_IF_MEDIA_CONNECT_STATE
{
  MediaConnectStateUnknown = 0,
  MediaConnectStateConnected = 1,
  MediaConnectStateDisconnected = 2,
} NET_IF_MEDIA_CONNECT_STATE, *PNET_IF_MEDIA_CONNECT_STATE;

typedef enum _NET_IF_MEDIA_DUPLEX_STATE
{
  MediaDuplexStateUnknown = 0,
  MediaDuplexStateHalf = 1,
  MediaDuplexStateFull = 2,
} NET_IF_MEDIA_DUPLEX_STATE, *PNET_IF_MEDIA_DUPLEX_STATE;

typedef enum _NET_IF_ACCESS_TYPE
{
  NET_IF_ACCESS_LOOPBACK = 1,
  NET_IF_ACCESS_BROADCAST = 2,
  NET_IF_ACCESS_POINT_TO_POINT = 3,
  NET_IF_ACCESS_POINT_TO_MULTI_POINT = 4,
  NET_IF_ACCESS_MAXIMUM = 5,
} NET_IF_ACCESS_TYPE, *PNET_IF_ACCESS_TYPE;

typedef enum _NET_IF_DIRECTION_TYPE
{
  NET_IF_DIRECTION_SENDRECEIVE = 0,
  NET_IF_DIRECTION_SENDONLY = 1,
  NET_IF_DIRECTION_RECEIVEONLY = 2,
  NET_IF_DIRECTION_MAXIMUM = 3,
} NET_IF_DIRECTION_TYPE, *PNET_IF_DIRECTION_TYPE;

typedef enum _NET_IF_CONNECTION_TYPE
{
  NET_IF_CONNECTION_DEDICATED = 1,
  NET_IF_CONNECTION_PASSIVE = 2,
  NET_IF_CONNECTION_DEMAND = 3,
  NET_IF_CONNECTION_MAXIMUM = 4,
} NET_IF_CONNECTION_TYPE, *PNET_IF_CONNECTION_TYPE;

typedef struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ enum _NDIS_MEDIUM MediaType;
  /* 0x000c */ enum _NDIS_PHYSICAL_MEDIUM PhysicalMediumType;
  /* 0x0010 */ unsigned long MtuSize;
  /* 0x0018 */ unsigned __int64 MaxXmitLinkSpeed;
  /* 0x0020 */ unsigned __int64 XmitLinkSpeed;
  /* 0x0028 */ unsigned __int64 MaxRcvLinkSpeed;
  /* 0x0030 */ unsigned __int64 RcvLinkSpeed;
  /* 0x0038 */ enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectState;
  /* 0x003c */ enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexState;
  /* 0x0040 */ unsigned long LookaheadSize;
  /* 0x0048 */ struct _NDIS_PNP_CAPABILITIES* PowerManagementCapabilities;
  /* 0x0050 */ unsigned long MacOptions;
  /* 0x0054 */ unsigned long SupportedPacketFilters;
  /* 0x0058 */ unsigned long MaxMulticastListSize;
  /* 0x005c */ unsigned short MacAddressLength;
  /* 0x005e */ unsigned char PermanentMacAddress[32];
  /* 0x007e */ unsigned char CurrentMacAddress[32];
  /* 0x00a0 */ struct _NDIS_RECEIVE_SCALE_CAPABILITIES* RecvScaleCapabilities;
  /* 0x00a8 */ enum _NET_IF_ACCESS_TYPE AccessType;
  /* 0x00ac */ enum _NET_IF_DIRECTION_TYPE DirectionType;
  /* 0x00b0 */ enum _NET_IF_CONNECTION_TYPE ConnectionType;
  /* 0x00b4 */ unsigned short IfType;
  /* 0x00b6 */ unsigned char IfConnectorPresent;
  /* 0x00b8 */ unsigned long SupportedStatistics;
  /* 0x00bc */ unsigned long SupportedPauseFunctions;
  /* 0x00c0 */ unsigned long DataBackFillSize;
  /* 0x00c4 */ unsigned long ContextBackFillSize;
  /* 0x00c8 */ unsigned long* SupportedOidList;
  /* 0x00d0 */ unsigned long SupportedOidListLength;
  /* 0x00d4 */ unsigned long AutoNegotiationFlags;
  /* 0x00d8 */ struct _NDIS_PM_CAPABILITIES* PowerManagementCapabilitiesEx;
} NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES, *PNDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES; /* size: 0x00e0 */

