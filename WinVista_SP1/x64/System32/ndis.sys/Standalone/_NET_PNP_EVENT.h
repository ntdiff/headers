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
  NetEventMaximum = 13,
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

