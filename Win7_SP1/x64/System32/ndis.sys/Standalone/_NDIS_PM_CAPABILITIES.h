typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_DEVICE_POWER_STATE
{
  NdisDeviceStateUnspecified = 0,
  NdisDeviceStateD0 = 1,
  NdisDeviceStateD1 = 2,
  NdisDeviceStateD2 = 3,
  NdisDeviceStateD3 = 4,
  NdisDeviceStateMaximum = 5,
} NDIS_DEVICE_POWER_STATE, *PNDIS_DEVICE_POWER_STATE;

typedef struct _NDIS_PM_CAPABILITIES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long SupportedWoLPacketPatterns;
  /* 0x000c */ unsigned long NumTotalWoLPatterns;
  /* 0x0010 */ unsigned long MaxWoLPatternSize;
  /* 0x0014 */ unsigned long MaxWoLPatternOffset;
  /* 0x0018 */ unsigned long MaxWoLPacketSaveBuffer;
  /* 0x001c */ unsigned long SupportedProtocolOffloads;
  /* 0x0020 */ unsigned long NumArpOffloadIPv4Addresses;
  /* 0x0024 */ unsigned long NumNSOffloadIPv6Addresses;
  /* 0x0028 */ enum _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp;
  /* 0x002c */ enum _NDIS_DEVICE_POWER_STATE MinPatternWakeUp;
  /* 0x0030 */ enum _NDIS_DEVICE_POWER_STATE MinLinkChangeWakeUp;
} NDIS_PM_CAPABILITIES, *PNDIS_PM_CAPABILITIES; /* size: 0x0034 */

