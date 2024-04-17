typedef enum _STORAGE_BUS_TYPE
{
  BusTypeUnknown = 0,
  BusTypeScsi = 1,
  BusTypeAtapi = 2,
  BusTypeAta = 3,
  BusType1394 = 4,
  BusTypeSsa = 5,
  BusTypeFibre = 6,
  BusTypeUsb = 7,
  BusTypeRAID = 8,
  BusTypeiScsi = 9,
  BusTypeSas = 10,
  BusTypeSata = 11,
  BusTypeSd = 12,
  BusTypeMmc = 13,
  BusTypeVirtual = 14,
  BusTypeFileBackedVirtual = 15,
  BusTypeSpaces = 16,
  BusTypeNvme = 17,
  BusTypeMax = 18,
  BusTypeMaxReserved = 127,
} STORAGE_BUS_TYPE, *PSTORAGE_BUS_TYPE;

typedef struct _STORAGE_DEVICE_DESCRIPTOR
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned char DeviceType;
  /* 0x0009 */ unsigned char DeviceTypeModifier;
  /* 0x000a */ unsigned char RemovableMedia;
  /* 0x000b */ unsigned char CommandQueueing;
  /* 0x000c */ unsigned long VendorIdOffset;
  /* 0x0010 */ unsigned long ProductIdOffset;
  /* 0x0014 */ unsigned long ProductRevisionOffset;
  /* 0x0018 */ unsigned long SerialNumberOffset;
  /* 0x001c */ enum _STORAGE_BUS_TYPE BusType;
  /* 0x0020 */ unsigned long RawPropertiesLength;
  /* 0x0024 */ unsigned char RawDeviceProperties[1];
  /* 0x0025 */ char __PADDING__[3];
} STORAGE_DEVICE_DESCRIPTOR, *PSTORAGE_DEVICE_DESCRIPTOR; /* size: 0x0028 */

