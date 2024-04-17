typedef struct _DBGKD_READ_WRITE_IO_EXTENDED64
{
  /* 0x0000 */ unsigned long DataSize;
  /* 0x0004 */ unsigned long InterfaceType;
  /* 0x0008 */ unsigned long BusNumber;
  /* 0x000c */ unsigned long AddressSpace;
  /* 0x0010 */ unsigned __int64 IoAddress;
  /* 0x0018 */ unsigned long DataValue;
  /* 0x001c */ long __PADDING__[1];
} DBGKD_READ_WRITE_IO_EXTENDED64, *PDBGKD_READ_WRITE_IO_EXTENDED64; /* size: 0x0020 */

