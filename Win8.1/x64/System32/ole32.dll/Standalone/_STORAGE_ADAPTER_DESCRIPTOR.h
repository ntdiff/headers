typedef struct _STORAGE_ADAPTER_DESCRIPTOR
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned long MaximumTransferLength;
  /* 0x000c */ unsigned long MaximumPhysicalPages;
  /* 0x0010 */ unsigned long AlignmentMask;
  /* 0x0014 */ unsigned char AdapterUsesPio;
  /* 0x0015 */ unsigned char AdapterScansDown;
  /* 0x0016 */ unsigned char CommandQueueing;
  /* 0x0017 */ unsigned char AcceleratedTransfer;
  /* 0x0018 */ unsigned char BusType;
  /* 0x001a */ unsigned short BusMajorVersion;
  /* 0x001c */ unsigned short BusMinorVersion;
  /* 0x001e */ unsigned char SrbType;
  /* 0x001f */ unsigned char AddressType;
} STORAGE_ADAPTER_DESCRIPTOR, *PSTORAGE_ADAPTER_DESCRIPTOR; /* size: 0x0020 */

