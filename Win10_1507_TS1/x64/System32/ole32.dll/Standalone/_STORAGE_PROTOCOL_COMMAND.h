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

typedef struct _STORAGE_PROTOCOL_COMMAND
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Length;
  /* 0x0008 */ enum _STORAGE_PROTOCOL_TYPE ProtocolType;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ unsigned long ReturnStatus;
  /* 0x0014 */ unsigned long ErrorCode;
  /* 0x0018 */ unsigned long CommandLength;
  /* 0x001c */ unsigned long ErrorInfoLength;
  /* 0x0020 */ unsigned long DataToDeviceTransferLength;
  /* 0x0024 */ unsigned long DataFromDeviceTransferLength;
  /* 0x0028 */ unsigned long TimeOutValue;
  /* 0x002c */ unsigned long ErrorInfoOffset;
  /* 0x0030 */ unsigned long DataToDeviceBufferOffset;
  /* 0x0034 */ unsigned long DataFromDeviceBufferOffset;
  /* 0x0038 */ unsigned long CommandSpecific;
  /* 0x003c */ unsigned long Reserved0;
  /* 0x0040 */ unsigned long FixedProtocolReturnData;
  /* 0x0044 */ unsigned long Reserved1[3];
  /* 0x0050 */ unsigned char Command[1];
  /* 0x0051 */ char __PADDING__[3];
} STORAGE_PROTOCOL_COMMAND, *PSTORAGE_PROTOCOL_COMMAND; /* size: 0x0054 */

