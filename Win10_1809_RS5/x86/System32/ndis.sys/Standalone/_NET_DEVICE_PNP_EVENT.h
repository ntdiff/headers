typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_DEVICE_PNP_EVENT
{
  NdisDevicePnPEventQueryRemoved = 0,
  NdisDevicePnPEventRemoved = 1,
  NdisDevicePnPEventSurpriseRemoved = 2,
  NdisDevicePnPEventQueryStopped = 3,
  NdisDevicePnPEventStopped = 4,
  NdisDevicePnPEventPowerProfileChanged = 5,
  NdisDevicePnPEventFilterListChanged = 6,
  NdisDevicePnPEventMaximum = 7,
} NDIS_DEVICE_PNP_EVENT, *PNDIS_DEVICE_PNP_EVENT;

typedef struct _NET_DEVICE_PNP_EVENT
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long PortNumber;
  /* 0x0008 */ enum _NDIS_DEVICE_PNP_EVENT DevicePnPEvent;
  /* 0x000c */ void* InformationBuffer;
  /* 0x0010 */ unsigned long InformationBufferLength;
  /* 0x0014 */ unsigned char NdisReserved[8];
} NET_DEVICE_PNP_EVENT, *PNET_DEVICE_PNP_EVENT; /* size: 0x001c */

