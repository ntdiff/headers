typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef enum _NDIS_PORT_PNP_STATE
{
  NdisPortPnPStateAllocating = 1,
  NdisPortPnPStateAllocated = 2,
  NdisPortPnPStateActivating = 3,
  NdisPortPnPStateActivated = 4,
  NdisPortPnPStateDeactivating = 5,
  NdisPortPnPStateDeactivated = 6,
  NdisPortPnPStateDeallocating = 7,
  NdisPortPnPStateDeallocated = 8,
} NDIS_PORT_PNP_STATE, *PNDIS_PORT_PNP_STATE;

typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_PORT_TYPE
{
  NdisPortTypeUndefined = 0,
  NdisPortTypeBridge = 1,
  NdisPortTypeRasConnection = 2,
  NdisPortType8021xSupplicant = 3,
  NdisPortTypeMax = 4,
} NDIS_PORT_TYPE, *PNDIS_PORT_TYPE;

typedef enum _NET_IF_MEDIA_CONNECT_STATE
{
  MediaConnectStateUnknown = 0,
  MediaConnectStateConnected = 1,
  MediaConnectStateDisconnected = 2,
} NET_IF_MEDIA_CONNECT_STATE, *PNET_IF_MEDIA_CONNECT_STATE;

typedef enum _NET_IF_DIRECTION_TYPE
{
  NET_IF_DIRECTION_SENDRECEIVE = 0,
  NET_IF_DIRECTION_SENDONLY = 1,
  NET_IF_DIRECTION_RECEIVEONLY = 2,
  NET_IF_DIRECTION_MAXIMUM = 3,
} NET_IF_DIRECTION_TYPE, *PNET_IF_DIRECTION_TYPE;

typedef enum _NDIS_PORT_CONTROL_STATE
{
  NdisPortControlStateUnknown = 0,
  NdisPortControlStateControlled = 1,
  NdisPortControlStateUncontrolled = 2,
} NDIS_PORT_CONTROL_STATE, *PNDIS_PORT_CONTROL_STATE;

typedef enum _NDIS_PORT_AUTHORIZATION_STATE
{
  NdisPortAuthorizationUnknown = 0,
  NdisPortAuthorized = 1,
  NdisPortUnauthorized = 2,
  NdisPortReauthorizing = 3,
} NDIS_PORT_AUTHORIZATION_STATE, *PNDIS_PORT_AUTHORIZATION_STATE;

typedef struct _NDIS_PORT_CHARACTERISTICS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long PortNumber;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ enum _NDIS_PORT_TYPE Type;
  /* 0x0010 */ enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectState;
  /* 0x0018 */ unsigned __int64 XmitLinkSpeed;
  /* 0x0020 */ unsigned __int64 RcvLinkSpeed;
  /* 0x0028 */ enum _NET_IF_DIRECTION_TYPE Direction;
  /* 0x002c */ enum _NDIS_PORT_CONTROL_STATE SendControlState;
  /* 0x0030 */ enum _NDIS_PORT_CONTROL_STATE RcvControlState;
  /* 0x0034 */ enum _NDIS_PORT_AUTHORIZATION_STATE SendAuthorizationState;
  /* 0x0038 */ enum _NDIS_PORT_AUTHORIZATION_STATE RcvAuthorizationState;
  /* 0x003c */ long __PADDING__[1];
} NDIS_PORT_CHARACTERISTICS, *PNDIS_PORT_CHARACTERISTICS; /* size: 0x0040 */

typedef struct _NDIS_PORT_BLOCK
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0008 */ enum _NDIS_PORT_PNP_STATE PortPnPState;
  /* 0x000c */ enum _NDIS_PORT_PNP_STATE PrevPortPnPState;
  /* 0x0010 */ struct _NDIS_PORT_CHARACTERISTICS PortCharacteristics;
} NDIS_PORT_BLOCK, *PNDIS_PORT_BLOCK; /* size: 0x0050 */

