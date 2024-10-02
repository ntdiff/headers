typedef enum _SYSTEM_MEMORY_NUMA_PERFORMANCE_DATA_TYPES
{
  SystemMemoryNumaPerformance_ReadLatency = 0,
  SystemMemoryNumaPerformance_ReadBandwidth = 1,
  SystemMemoryNumaPerformance_WriteLatency = 2,
  SystemMemoryNumaPerformance_WriteBandwidth = 3,
  SystemMemoryNumaPerformance_MaxDataType = 4,
} SYSTEM_MEMORY_NUMA_PERFORMANCE_DATA_TYPES, *PSYSTEM_MEMORY_NUMA_PERFORMANCE_DATA_TYPES;

typedef struct _SYSTEM_MEMORY_NUMA_PERFORMANCE_ENTRY
{
  /* 0x0000 */ unsigned long InitiatorNodeNumber;
  /* 0x0004 */ unsigned long TargetNodeNumber;
  /* 0x0008 */ enum _SYSTEM_MEMORY_NUMA_PERFORMANCE_DATA_TYPES DataType;
  struct
  {
    struct /* bitfield */
    {
      /* 0x000c */ unsigned char MinTransferSizeToAchieveValues : 1; /* bit position: 0 */
      /* 0x000c */ unsigned char NonSequentialTransfers : 1; /* bit position: 1 */
      /* 0x000c */ unsigned char Reserved : 6; /* bit position: 2 */
    }; /* bitfield */
  } /* size: 0x0001 */ Flags;
  /* 0x0010 */ unsigned __int64 MinTransferSizeInBytes;
  /* 0x0018 */ unsigned __int64 EntryValue;
} SYSTEM_MEMORY_NUMA_PERFORMANCE_ENTRY, *PSYSTEM_MEMORY_NUMA_PERFORMANCE_ENTRY; /* size: 0x0020 */

typedef struct _SYSTEM_MEMORY_NUMA_PERFORMANCE_INFORMATION_OUTPUT
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned long EntryCount;
  /* 0x0010 */ struct _SYSTEM_MEMORY_NUMA_PERFORMANCE_ENTRY PerformanceEntries[1];
} SYSTEM_MEMORY_NUMA_PERFORMANCE_INFORMATION_OUTPUT, *PSYSTEM_MEMORY_NUMA_PERFORMANCE_INFORMATION_OUTPUT; /* size: 0x0030 */

