typedef enum _STORAGE_PORT_CODE_SET
{
  StoragePortCodeSetReserved = 0,
  StoragePortCodeSetStorport = 1,
  StoragePortCodeSetSCSIport = 2,
  StoragePortCodeSetSpaceport = 3,
  StoragePortCodeSetATAport = 4,
  StoragePortCodeSetUSBport = 5,
  StoragePortCodeSetSBP2port = 6,
  StoragePortCodeSetSDport = 7,
} STORAGE_PORT_CODE_SET, *PSTORAGE_PORT_CODE_SET;

typedef struct _STORAGE_MINIPORT_DESCRIPTOR
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ enum _STORAGE_PORT_CODE_SET Portdriver;
  /* 0x000c */ unsigned char LUNResetSupported;
  /* 0x000d */ unsigned char TargetResetSupported;
  /* 0x000e */ unsigned short IoTimeoutValue;
} STORAGE_MINIPORT_DESCRIPTOR, *PSTORAGE_MINIPORT_DESCRIPTOR; /* size: 0x0010 */

