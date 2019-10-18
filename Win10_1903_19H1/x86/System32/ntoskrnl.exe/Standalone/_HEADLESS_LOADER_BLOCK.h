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
  /* 0x000c */ unsigned char* PortAddress;
  /* 0x0010 */ unsigned short PciDeviceId;
  /* 0x0012 */ unsigned short PciVendorId;
  /* 0x0014 */ unsigned char PciBusNumber;
  /* 0x0016 */ unsigned short PciBusSegment;
  /* 0x0018 */ unsigned char PciSlotNumber;
  /* 0x0019 */ unsigned char PciFunctionNumber;
  /* 0x001c */ unsigned long PciFlags;
  /* 0x0020 */ struct _GUID SystemGUID;
  /* 0x0030 */ unsigned char IsMMIODevice;
  /* 0x0031 */ unsigned char TerminalType;
  /* 0x0032 */ unsigned char InterfaceType;
  /* 0x0033 */ unsigned char RegisterBitWidth;
  /* 0x0034 */ unsigned char RegisterAccessSize;
  /* 0x0035 */ char __PADDING__[3];
} HEADLESS_LOADER_BLOCK, *PHEADLESS_LOADER_BLOCK; /* size: 0x0038 */

