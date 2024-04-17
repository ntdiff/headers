typedef struct _GET_CHANGER_PARAMETERS
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned short NumberTransportElements;
  /* 0x0006 */ unsigned short NumberStorageElements;
  /* 0x0008 */ unsigned short NumberCleanerSlots;
  /* 0x000a */ unsigned short NumberIEElements;
  /* 0x000c */ unsigned short NumberDataTransferElements;
  /* 0x000e */ unsigned short NumberOfDoors;
  /* 0x0010 */ unsigned short FirstSlotNumber;
  /* 0x0012 */ unsigned short FirstDriveNumber;
  /* 0x0014 */ unsigned short FirstTransportNumber;
  /* 0x0016 */ unsigned short FirstIEPortNumber;
  /* 0x0018 */ unsigned short FirstCleanerSlotAddress;
  /* 0x001a */ unsigned short MagazineSize;
  /* 0x001c */ unsigned long DriveCleanTimeout;
  /* 0x0020 */ unsigned long Features0;
  /* 0x0024 */ unsigned long Features1;
  /* 0x0028 */ unsigned char MoveFromTransport;
  /* 0x0029 */ unsigned char MoveFromSlot;
  /* 0x002a */ unsigned char MoveFromIePort;
  /* 0x002b */ unsigned char MoveFromDrive;
  /* 0x002c */ unsigned char ExchangeFromTransport;
  /* 0x002d */ unsigned char ExchangeFromSlot;
  /* 0x002e */ unsigned char ExchangeFromIePort;
  /* 0x002f */ unsigned char ExchangeFromDrive;
  /* 0x0030 */ unsigned char LockUnlockCapabilities;
  /* 0x0031 */ unsigned char PositionCapabilities;
  /* 0x0032 */ unsigned char Reserved1[2];
  /* 0x0034 */ unsigned long Reserved2[2];
} GET_CHANGER_PARAMETERS, *PGET_CHANGER_PARAMETERS; /* size: 0x003c */

