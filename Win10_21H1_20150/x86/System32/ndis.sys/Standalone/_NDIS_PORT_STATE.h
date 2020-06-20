typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

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

typedef struct _NDIS_PORT_STATE
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectState;
  /* 0x0008 */ unsigned __int64 XmitLinkSpeed;
  /* 0x0010 */ unsigned __int64 RcvLinkSpeed;
  /* 0x0018 */ enum _NET_IF_DIRECTION_TYPE Direction;
  /* 0x001c */ enum _NDIS_PORT_CONTROL_STATE SendControlState;
  /* 0x0020 */ enum _NDIS_PORT_CONTROL_STATE RcvControlState;
  /* 0x0024 */ enum _NDIS_PORT_AUTHORIZATION_STATE SendAuthorizationState;
  /* 0x0028 */ enum _NDIS_PORT_AUTHORIZATION_STATE RcvAuthorizationState;
  /* 0x002c */ unsigned long Flags;
} NDIS_PORT_STATE, *PNDIS_PORT_STATE; /* size: 0x0030 */

