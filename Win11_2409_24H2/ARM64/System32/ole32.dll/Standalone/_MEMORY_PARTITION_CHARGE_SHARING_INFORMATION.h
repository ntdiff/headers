typedef enum _MEMORY_PARTITION_CHARGE_SHARING_TYPE
{
  MemoryPartitionMemorySharingTypeVirtual = 0,
  MemoryPartitionMemorySharingTypePhysical = 1,
  MemoryPartitionMemorySharingTypeMaximum = 2,
} MEMORY_PARTITION_CHARGE_SHARING_TYPE, *PMEMORY_PARTITION_CHARGE_SHARING_TYPE;

typedef struct _MEMORY_PARTITION_CHARGE_SHARING_ATTRIBUTES
{
  /* 0x0000 */ enum _MEMORY_PARTITION_CHARGE_SHARING_TYPE Type;
  /* 0x0008 */ unsigned __int64 CurrentChargeInPages;
  /* 0x0010 */ unsigned __int64 PeakChargeInPages;
  /* 0x0018 */ unsigned __int64 ChargeLimitInPages;
  /* 0x0020 */ unsigned __int64 ChargeFailures;
} MEMORY_PARTITION_CHARGE_SHARING_ATTRIBUTES, *PMEMORY_PARTITION_CHARGE_SHARING_ATTRIBUTES; /* size: 0x0028 */

typedef struct _MEMORY_PARTITION_CHARGE_SHARING_INFORMATION
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long NumberOfTypes;
  /* 0x0008 */ struct _MEMORY_PARTITION_CHARGE_SHARING_ATTRIBUTES PartitionChargeSharing[1];
} MEMORY_PARTITION_CHARGE_SHARING_INFORMATION, *PMEMORY_PARTITION_CHARGE_SHARING_INFORMATION; /* size: 0x0030 */

