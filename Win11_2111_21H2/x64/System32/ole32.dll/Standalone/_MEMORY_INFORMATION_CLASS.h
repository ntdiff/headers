typedef enum _MEMORY_INFORMATION_CLASS
{
  MemoryBasicInformation = 0,
  MemoryWorkingSetInformation = 1,
  MemoryMappedFilenameInformation = 2,
  MemoryRegionInformation = 3,
  MemoryWorkingSetExInformation = 4,
  MemorySharedCommitInformation = 5,
  MemoryImageInformation = 6,
  MemoryRegionInformationEx = 7,
  MemoryPrivilegedBasicInformation = 8,
  MemoryEnclaveImageInformation = 9,
  MemoryBasicInformationCapped = 10,
  MemoryPhysicalContiguityInformation = 11,
  MemoryBadInformation = 12,
} MEMORY_INFORMATION_CLASS, *PMEMORY_INFORMATION_CLASS;

