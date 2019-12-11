typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef union _NET_LUID_LH
{
  union
  {
    /* 0x0000 */ unsigned __int64 Value;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Reserved : 24; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 NetLuidIndex : 24; /* bit position: 24 */
        /* 0x0000 */ unsigned __int64 IfType : 16; /* bit position: 48 */
      }; /* bitfield */
    } /* size: 0x0008 */ Info;
  }; /* size: 0x0008 */
} NET_LUID_LH, *PNET_LUID_LH; /* size: 0x0008 */

typedef struct _NET_PHYSICAL_LOCATION_LH
{
  /* 0x0000 */ unsigned long BusNumber;
  /* 0x0004 */ unsigned long SlotNumber;
  /* 0x0008 */ unsigned long FunctionNumber;
} NET_PHYSICAL_LOCATION_LH, *PNET_PHYSICAL_LOCATION_LH; /* size: 0x000c */

typedef struct _IF_COUNTED_STRING_LH
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ wchar_t String[257];
} IF_COUNTED_STRING_LH, *PIF_COUNTED_STRING_LH; /* size: 0x0204 */

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

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

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
  NdisPhysicalMediumMax = 20,
} NDIS_PHYSICAL_MEDIUM, *PNDIS_PHYSICAL_MEDIUM;

typedef enum _NET_IF_OPER_STATUS
{
  NET_IF_OPER_STATUS_UP = 1,
  NET_IF_OPER_STATUS_DOWN = 2,
  NET_IF_OPER_STATUS_TESTING = 3,
  NET_IF_OPER_STATUS_UNKNOWN = 4,
  NET_IF_OPER_STATUS_DORMANT = 5,
  NET_IF_OPER_STATUS_NOT_PRESENT = 6,
  NET_IF_OPER_STATUS_LOWER_LAYER_DOWN = 7,
} NET_IF_OPER_STATUS, *PNET_IF_OPER_STATUS;

typedef struct _IF_PHYSICAL_ADDRESS_LH
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned char Address[32];
} IF_PHYSICAL_ADDRESS_LH, *PIF_PHYSICAL_ADDRESS_LH; /* size: 0x0022 */

typedef enum _NET_IF_ADMIN_STATUS
{
  NET_IF_ADMIN_STATUS_UP = 1,
  NET_IF_ADMIN_STATUS_DOWN = 2,
  NET_IF_ADMIN_STATUS_TESTING = 3,
} NET_IF_ADMIN_STATUS, *PNET_IF_ADMIN_STATUS;

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

typedef struct _NDIS_IF_BLOCK
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0008 */ struct _LIST_ENTRY Link;
  /* 0x0018 */ struct _LIST_ENTRY ProviderLink;
  /* 0x0028 */ struct _LIST_ENTRY NetworkLink;
  /* 0x0038 */ struct _NDIS_IF_RCV_ADDRESS* ifRcvAddressTable;
  /* 0x0040 */ unsigned long ifRcvAddressCount;
  /* 0x0044 */ unsigned long ifMaxRcvAddressCount;
  /* 0x0048 */ unsigned long LowerLayerIfCount;
  /* 0x004c */ unsigned long HigherLayerIfCount;
  /* 0x0050 */ long Ref;
  /* 0x0058 */ union _NET_LUID_LH NetLuid;
  /* 0x0060 */ void* ProviderIfContext;
  /* 0x0068 */ struct _NDIS_IF_PROVIDER_BLOCK* ProviderHandle;
  /* 0x0070 */ unsigned long Flags;
  /* 0x0074 */ struct _NET_PHYSICAL_LOCATION_LH PhysicalLocation;
  /* 0x0080 */ unsigned long WanTunnelType;
  /* 0x0084 */ unsigned long PortNumber;
  /* 0x0088 */ unsigned __int64 ifLastChange;
  /* 0x0090 */ unsigned __int64 ifCounterDiscontinuityTime;
  union
  {
    /* 0x0098 */ unsigned char RosInfo;
    /* 0x0098 */ unsigned long ifIndex;
  }; /* size: 0x0004 */
  /* 0x009c */ struct _IF_COUNTED_STRING_LH ifDescr;
  /* 0x02a0 */ unsigned short ifType;
  /* 0x02a4 */ enum _NET_IF_ACCESS_TYPE AccessType;
  /* 0x02a8 */ enum _NET_IF_DIRECTION_TYPE DirectionType;
  /* 0x02ac */ enum _NET_IF_CONNECTION_TYPE ConnectionType;
  /* 0x02b0 */ struct _GUID InterfaceGuid;
  /* 0x02c0 */ unsigned char ifConnectorPresent;
  /* 0x02c4 */ unsigned long ifFlags;
  /* 0x02c8 */ enum _NDIS_MEDIUM MediaType;
  /* 0x02cc */ enum _NDIS_PHYSICAL_MEDIUM PhysicalMediumType;
  union
  {
    /* 0x02d0 */ unsigned char RodInfo;
    /* 0x02d0 */ unsigned int CompartmentId;
  }; /* size: 0x0004 */
  /* 0x02d4 */ struct _GUID NetworkGuid;
  /* 0x02e4 */ struct _IF_COUNTED_STRING_LH ifAlias;
  /* 0x04e8 */ enum _NET_IF_OPER_STATUS ifOperStatus;
  /* 0x04ec */ unsigned long ifOperStatusFlags;
  /* 0x04f0 */ unsigned long ifMtu;
  /* 0x04f4 */ struct _IF_PHYSICAL_ADDRESS_LH ifPhysAddress;
  /* 0x0516 */ struct _IF_PHYSICAL_ADDRESS_LH PermanentPhysAddress;
  /* 0x0538 */ enum _NET_IF_ADMIN_STATUS ifAdminStatus;
  /* 0x0540 */ unsigned __int64 XmitLinkSpeed;
  /* 0x0548 */ unsigned __int64 RcvLinkSpeed;
  /* 0x0550 */ unsigned char ifPromiscuousMode;
  /* 0x0551 */ unsigned char ifDeviceWakeUpEnable;
  /* 0x0554 */ enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectState;
  /* 0x0558 */ enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexState;
  /* 0x0560 */ struct _NDIS_IF_NETWORK_BLOCK* Network;
  /* 0x0568 */ struct _NDIS_IF_COMPARTMENT_BLOCK* Compartment;
  /* 0x0570 */ struct _KEVENT* AsyncEvent;
  /* 0x0578 */ unsigned char bNdisIsProvider;
  /* 0x0579 */ unsigned char IsNdisFilter;
  /* 0x057a */ unsigned char MiniportAvailable;
  /* 0x057c */ unsigned long MiniportLinkReference;
  union
  {
    /* 0x0580 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
    /* 0x0580 */ struct _NDIS_FILTER_BLOCK* Filter;
  }; /* size: 0x0008 */
  /* 0x0588 */ unsigned long SupportedStatistics;
  /* 0x0590 */ struct _IF_COUNTED_STRING_LH* ifL2NetworkInfo;
  /* 0x0598 */ struct NDIS_REFCOUNT_HANDLE__* RefCountTracker;
  /* 0x05a0 */ struct NDIS_REFCOUNT_HANDLE__* MpRefCountTracker;
} NDIS_IF_BLOCK, *PNDIS_IF_BLOCK; /* size: 0x05a8 */

