typedef struct _DEVICE_COPY_OFFLOAD_DESCRIPTOR
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned long MaximumTokenLifetime;
  /* 0x000c */ unsigned long DefaultTokenLifetime;
  /* 0x0010 */ unsigned __int64 MaximumTransferSize;
  /* 0x0018 */ unsigned __int64 OptimalTransferCount;
  /* 0x0020 */ unsigned long MaximumDataDescriptors;
  /* 0x0024 */ unsigned long MaximumTransferLengthPerDescriptor;
  /* 0x0028 */ unsigned long OptimalTransferLengthPerDescriptor;
  /* 0x002c */ unsigned short OptimalTransferLengthGranularity;
  /* 0x002e */ unsigned char Reserved[2];
} DEVICE_COPY_OFFLOAD_DESCRIPTOR, *PDEVICE_COPY_OFFLOAD_DESCRIPTOR; /* size: 0x0030 */

