typedef struct _CM_PCCARD_DEVICE_DATA
{
  /* 0x0000 */ unsigned char Flags;
  /* 0x0001 */ unsigned char ErrorCode;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0004 */ unsigned long BusData;
  /* 0x0008 */ unsigned long DeviceId;
  /* 0x000c */ unsigned long LegacyBaseAddress;
  /* 0x0010 */ unsigned char IRQMap[16];
} CM_PCCARD_DEVICE_DATA, *PCM_PCCARD_DEVICE_DATA; /* size: 0x0020 */

