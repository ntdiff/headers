typedef struct _DBGKD_READ_WRITE_IO_EXTENDED32
{
  /* 0x0000 */ unsigned long DataSize;
  /* 0x0004 */ unsigned long InterfaceType;
  /* 0x0008 */ unsigned long BusNumber;
  /* 0x000c */ unsigned long AddressSpace;
  /* 0x0010 */ unsigned long IoAddress;
  /* 0x0014 */ unsigned long DataValue;
} DBGKD_READ_WRITE_IO_EXTENDED32, *PDBGKD_READ_WRITE_IO_EXTENDED32; /* size: 0x0018 */

