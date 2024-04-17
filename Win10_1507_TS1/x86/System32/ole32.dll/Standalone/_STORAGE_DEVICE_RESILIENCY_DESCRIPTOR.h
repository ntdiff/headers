typedef struct _STORAGE_DEVICE_RESILIENCY_DESCRIPTOR
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned long NameOffset;
  /* 0x000c */ unsigned long NumberOfLogicalCopies;
  /* 0x0010 */ unsigned long NumberOfPhysicalCopies;
  /* 0x0014 */ unsigned long PhysicalDiskRedundancy;
  /* 0x0018 */ unsigned long NumberOfColumns;
  /* 0x001c */ unsigned long Interleave;
} STORAGE_DEVICE_RESILIENCY_DESCRIPTOR, *PSTORAGE_DEVICE_RESILIENCY_DESCRIPTOR; /* size: 0x0020 */

