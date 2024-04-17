typedef struct _FILE_FS_FULL_SIZE_INFORMATION_EX
{
  /* 0x0000 */ unsigned __int64 ActualTotalAllocationUnits;
  /* 0x0008 */ unsigned __int64 ActualAvailableAllocationUnits;
  /* 0x0010 */ unsigned __int64 ActualPoolUnavailableAllocationUnits;
  /* 0x0018 */ unsigned __int64 CallerTotalAllocationUnits;
  /* 0x0020 */ unsigned __int64 CallerAvailableAllocationUnits;
  /* 0x0028 */ unsigned __int64 CallerPoolUnavailableAllocationUnits;
  /* 0x0030 */ unsigned __int64 UsedAllocationUnits;
  /* 0x0038 */ unsigned __int64 TotalReservedAllocationUnits;
  /* 0x0040 */ unsigned __int64 VolumeStorageReserveAllocationUnits;
  /* 0x0048 */ unsigned __int64 AvailableCommittedAllocationUnits;
  /* 0x0050 */ unsigned __int64 PoolAvailableAllocationUnits;
  /* 0x0058 */ unsigned long SectorsPerAllocationUnit;
  /* 0x005c */ unsigned long BytesPerSector;
} FILE_FS_FULL_SIZE_INFORMATION_EX, *PFILE_FS_FULL_SIZE_INFORMATION_EX; /* size: 0x0060 */

