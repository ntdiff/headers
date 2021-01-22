typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NET_PNP_EVENT_CODE
{
  NetEventSetPower = 0,
  NetEventQueryPower = 1,
  NetEventQueryRemoveDevice = 2,
  NetEventCancelRemoveDevice = 3,
  NetEventReconfigure = 4,
  NetEventBindList = 5,
  NetEventBindsComplete = 6,
  NetEventPnPCapabilities = 7,
  NetEventPause = 8,
  NetEventRestart = 9,
  NetEventPortActivation = 10,
  NetEventPortDeactivation = 11,
  NetEventIMReEnableDevice = 12,
  NetEventNDKEnable = 13,
  NetEventNDKDisable = 14,
  NetEventFilterPreDetach = 15,
  NetEventBindFailed = 16,
  NetEventSwitchActivate = 17,
  NetEventAllowBindsAbove = 18,
  NetEventInhibitBindsAbove = 19,
  NetEventAllowStart = 20,
  NetEventRequirePause = 21,
  NetEventUploadGftFlowEntries = 22,
  NetEventMaximum = 23,
} NET_PNP_EVENT_CODE, *PNET_PNP_EVENT_CODE;

typedef struct _NET_PNP_EVENT
{
  /* 0x0000 */ enum _NET_PNP_EVENT_CODE NetEvent;
  /* 0x0008 */ void* Buffer;
  /* 0x0010 */ unsigned long BufferLength;
  /* 0x0018 */ unsigned __int64 NdisReserved[4];
  /* 0x0038 */ unsigned __int64 TransportReserved[4];
  /* 0x0058 */ unsigned __int64 TdiReserved[4];
  /* 0x0078 */ unsigned __int64 TdiClientReserved[4];
} NET_PNP_EVENT, *PNET_PNP_EVENT; /* size: 0x0098 */

typedef struct _NET_PNP_EVENT_NOTIFICATION
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long PortNumber;
  /* 0x0008 */ struct _NET_PNP_EVENT NetPnPEvent;
  /* 0x00a0 */ unsigned long Flags;
  /* 0x00a4 */ unsigned long SwitchId;
  /* 0x00a8 */ unsigned long VPortId;
  /* 0x00ac */ long __PADDING__[1];
} NET_PNP_EVENT_NOTIFICATION, *PNET_PNP_EVENT_NOTIFICATION; /* size: 0x00b0 */

