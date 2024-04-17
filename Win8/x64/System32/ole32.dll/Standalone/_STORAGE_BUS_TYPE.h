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
  BusTypeMax = 17,
  BusTypeMaxReserved = 127,
} STORAGE_BUS_TYPE, *PSTORAGE_BUS_TYPE;

