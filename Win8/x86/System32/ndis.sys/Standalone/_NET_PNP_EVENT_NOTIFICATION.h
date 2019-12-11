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
  NetEventMaximum = 18,
} NET_PNP_EVENT_CODE, *PNET_PNP_EVENT_CODE;

typedef struct _NET_PNP_EVENT
{
  /* 0x0000 */ enum _NET_PNP_EVENT_CODE NetEvent;
  /* 0x0004 */ void* Buffer;
  /* 0x0008 */ unsigned long BufferLength;
  /* 0x000c */ unsigned long NdisReserved[4];
  /* 0x001c */ unsigned long TransportReserved[4];
  /* 0x002c */ unsigned long TdiReserved[4];
  /* 0x003c */ unsigned long TdiClientReserved[4];
} NET_PNP_EVENT, *PNET_PNP_EVENT; /* size: 0x004c */

typedef struct _NET_PNP_EVENT_NOTIFICATION
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long PortNumber;
  /* 0x0008 */ struct _NET_PNP_EVENT NetPnPEvent;
  /* 0x0054 */ unsigned long Flags;
} NET_PNP_EVENT_NOTIFICATION, *PNET_PNP_EVENT_NOTIFICATION; /* size: 0x0058 */

