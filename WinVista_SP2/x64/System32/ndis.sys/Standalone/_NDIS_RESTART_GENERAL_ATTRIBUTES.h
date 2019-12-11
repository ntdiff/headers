typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NET_IF_ACCESS_TYPE
{
  NET_IF_ACCESS_LOOPBACK = 1,
  NET_IF_ACCESS_BROADCAST = 2,
  NET_IF_ACCESS_POINT_TO_POINT = 3,
  NET_IF_ACCESS_POINT_TO_MULTI_POINT = 4,
  NET_IF_ACCESS_MAXIMUM = 5,
} NET_IF_ACCESS_TYPE, *PNET_IF_ACCESS_TYPE;

typedef enum _NET_IF_CONNECTION_TYPE
{
  NET_IF_CONNECTION_DEDICATED = 1,
  NET_IF_CONNECTION_PASSIVE = 2,
  NET_IF_CONNECTION_DEMAND = 3,
  NET_IF_CONNECTION_MAXIMUM = 4,
} NET_IF_CONNECTION_TYPE, *PNET_IF_CONNECTION_TYPE;

typedef struct _NDIS_RESTART_GENERAL_ATTRIBUTES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long MtuSize;
  /* 0x0008 */ unsigned __int64 MaxXmitLinkSpeed;
  /* 0x0010 */ unsigned __int64 MaxRcvLinkSpeed;
  /* 0x0018 */ unsigned long LookaheadSize;
  /* 0x001c */ unsigned long MacOptions;
  /* 0x0020 */ unsigned long SupportedPacketFilters;
  /* 0x0024 */ unsigned long MaxMulticastListSize;
  /* 0x0028 */ struct _NDIS_RECEIVE_SCALE_CAPABILITIES* RecvScaleCapabilities;
  /* 0x0030 */ enum _NET_IF_ACCESS_TYPE AccessType;
  /* 0x0034 */ unsigned long Flags;
  /* 0x0038 */ enum _NET_IF_CONNECTION_TYPE ConnectionType;
  /* 0x003c */ unsigned long SupportedStatistics;
  /* 0x0040 */ unsigned long DataBackFillSize;
  /* 0x0044 */ unsigned long ContextBackFillSize;
  /* 0x0048 */ unsigned long* SupportedOidList;
  /* 0x0050 */ unsigned long SupportedOidListLength;
  /* 0x0054 */ long __PADDING__[1];
} NDIS_RESTART_GENERAL_ATTRIBUTES, *PNDIS_RESTART_GENERAL_ATTRIBUTES; /* size: 0x0058 */

