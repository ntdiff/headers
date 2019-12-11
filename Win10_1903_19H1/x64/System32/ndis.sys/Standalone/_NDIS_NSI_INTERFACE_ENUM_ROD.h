typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _IF_COUNTED_STRING_LH
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ wchar_t String[257];
} IF_COUNTED_STRING_LH, *PIF_COUNTED_STRING_LH; /* size: 0x0204 */

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

typedef struct _NDIS_NSI_INTERFACE_ENUM_ROD
{
  /* 0x0000 */ unsigned int CompartmentId;
  /* 0x0004 */ struct _GUID NetworkGuid;
  /* 0x0014 */ struct _IF_COUNTED_STRING_LH ifAlias;
  /* 0x0218 */ enum _NET_IF_OPER_STATUS ifOperStatus;
  /* 0x021c */ unsigned long ifOperStatusFlags;
  /* 0x0220 */ unsigned long ifMtu;
  /* 0x0224 */ struct _IF_PHYSICAL_ADDRESS_LH ifPhysAddress;
  /* 0x0246 */ struct _IF_PHYSICAL_ADDRESS_LH PermanentPhysAddress;
  /* 0x0268 */ enum _NET_IF_ADMIN_STATUS ifAdminStatus;
  /* 0x0270 */ unsigned __int64 XmitLinkSpeed;
  /* 0x0278 */ unsigned __int64 RcvLinkSpeed;
  /* 0x0280 */ unsigned char ifPromiscuousMode;
  /* 0x0281 */ unsigned char ifDeviceWakeUpEnable;
  /* 0x0282 */ unsigned char ifHideInterfaceInUi;
  /* 0x0284 */ enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectState;
  /* 0x0288 */ enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexState;
  /* 0x028c */ long __PADDING__[1];
} NDIS_NSI_INTERFACE_ENUM_ROD, *PNDIS_NSI_INTERFACE_ENUM_ROD; /* size: 0x0290 */

