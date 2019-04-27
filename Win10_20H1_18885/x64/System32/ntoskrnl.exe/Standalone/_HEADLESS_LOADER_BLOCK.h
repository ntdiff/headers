typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _HEADLESS_LOADER_BLOCK
{
  /* 0x0000 */ unsigned char UsedBiosSettings;
  /* 0x0001 */ unsigned char DataBits;
  /* 0x0002 */ unsigned char StopBits;
  /* 0x0003 */ unsigned char Parity;
  /* 0x0004 */ unsigned long BaudRate;
  /* 0x0008 */ unsigned long PortNumber;
  /* 0x0010 */ unsigned char* PortAddress;
  /* 0x0018 */ unsigned short PciDeviceId;
  /* 0x001a */ unsigned short PciVendorId;
  /* 0x001c */ unsigned char PciBusNumber;
  /* 0x001e */ unsigned short PciBusSegment;
  /* 0x0020 */ unsigned char PciSlotNumber;
  /* 0x0021 */ unsigned char PciFunctionNumber;
  /* 0x0024 */ unsigned long PciFlags;
  /* 0x0028 */ struct _GUID SystemGUID;
  /* 0x0038 */ unsigned char IsMMIODevice;
  /* 0x0039 */ unsigned char TerminalType;
  /* 0x003a */ unsigned char InterfaceType;
  /* 0x003b */ unsigned char RegisterBitWidth;
  /* 0x003c */ unsigned char RegisterAccessSize;
  /* 0x003d */ char __PADDING__[3];
} HEADLESS_LOADER_BLOCK, *PHEADLESS_LOADER_BLOCK; /* size: 0x0040 */

