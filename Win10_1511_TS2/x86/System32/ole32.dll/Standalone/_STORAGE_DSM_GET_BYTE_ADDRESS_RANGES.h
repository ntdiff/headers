typedef struct _DEVICE_STORAGE_ADDRESS_RANGE
{
  /* 0x0000 */ __int64 StartAddress;
  /* 0x0008 */ unsigned __int64 LengthInBytes;
} DEVICE_STORAGE_ADDRESS_RANGE, *PDEVICE_STORAGE_ADDRESS_RANGE; /* size: 0x0010 */

typedef struct _STORAGE_DSM_GET_BYTE_ADDRESS_RANGES
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned long Reserved;
  /* 0x000c */ unsigned long NumberOfRanges;
  /* 0x0010 */ struct _DEVICE_STORAGE_ADDRESS_RANGE Ranges[1];
} STORAGE_DSM_GET_BYTE_ADDRESS_RANGES, *PSTORAGE_DSM_GET_BYTE_ADDRESS_RANGES; /* size: 0x0020 */

