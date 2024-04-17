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

typedef struct _STORAGE_PROTOCOL_SPECIFIC_DATA
{
  /* 0x0000 */ enum _STORAGE_PROTOCOL_TYPE ProtocolType;
  /* 0x0004 */ unsigned long DataType;
  /* 0x0008 */ unsigned long ProtocolDataRequestValue;
  /* 0x000c */ unsigned long ProtocolDataRequestSubValue;
  /* 0x0010 */ unsigned long ProtocolDataOffset;
  /* 0x0014 */ unsigned long ProtocolDataLength;
  /* 0x0018 */ unsigned long FixedProtocolReturnData;
  /* 0x001c */ unsigned long Reserved[3];
} STORAGE_PROTOCOL_SPECIFIC_DATA, *PSTORAGE_PROTOCOL_SPECIFIC_DATA; /* size: 0x0028 */

typedef struct _STORAGE_PROTOCOL_DATA_DESCRIPTOR
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ struct _STORAGE_PROTOCOL_SPECIFIC_DATA ProtocolSpecificData;
} STORAGE_PROTOCOL_DATA_DESCRIPTOR, *PSTORAGE_PROTOCOL_DATA_DESCRIPTOR; /* size: 0x0030 */

