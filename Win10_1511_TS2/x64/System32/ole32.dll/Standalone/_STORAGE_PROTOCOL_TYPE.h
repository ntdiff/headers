typedef enum _STORAGE_PROTOCOL_TYPE
{
  ProtocolTypeUnknown = 0,
  ProtocolTypeScsi = 1,
  ProtocolTypeAta = 2,
  ProtocolTypeNvme = 3,
  ProtocolTypeSd = 4,
  ProtocolTypeProprietary = 126,
  ProtocolTypeMaxReserved = 127,
} STORAGE_PROTOCOL_TYPE, *PSTORAGE_PROTOCOL_TYPE;

