typedef enum _BOOT_ENTROPY_SOURCE_ID
{
  BootEntropySourceNone = 0,
  BootEntropySourceSeedfile = 1,
  BootEntropySourceExternal = 2,
  BootEntropySourceTpm = 3,
  BootEntropySourceRdrand = 4,
  BootEntropySourceTime = 5,
  BootEntropySourceAcpiOem0 = 6,
  BootEntropySourceUefi = 7,
  BootEntropySourceCng = 8,
  BootEntropySourceTcbTpm = 9,
  BootEntropySourceTcbRdrand = 10,
  BootMaxEntropySources = 10,
} BOOT_ENTROPY_SOURCE_ID, *PBOOT_ENTROPY_SOURCE_ID;

