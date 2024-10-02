typedef enum _SYSTEM_MEMORY_NUMA_PERFORMANCE_QUERY_DATA_TYPES
{
  SystemMemoryNumaPerformanceQuery_ReadLatency = 0,
  SystemMemoryNumaPerformanceQuery_ReadBandwidth = 1,
  SystemMemoryNumaPerformanceQuery_WriteLatency = 2,
  SystemMemoryNumaPerformanceQuery_WriteBandwidth = 3,
  SystemMemoryNumaPerformanceQuery_Latency = 4,
  SystemMemoryNumaPerformanceQuery_Bandwidth = 5,
  SystemMemoryNumaPerformanceQuery_AllDataTypes = 6,
  SystemMemoryNumaPerformanceQuery_MaxDataType = 7,
} SYSTEM_MEMORY_NUMA_PERFORMANCE_QUERY_DATA_TYPES, *PSYSTEM_MEMORY_NUMA_PERFORMANCE_QUERY_DATA_TYPES;

typedef struct _SYSTEM_MEMORY_NUMA_PERFORMANCE_INFORMATION_INPUT
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long TargetNodeNumber;
  /* 0x0008 */ enum _SYSTEM_MEMORY_NUMA_PERFORMANCE_QUERY_DATA_TYPES QueryDataType;
  /* 0x000c */ unsigned long Flags;
} SYSTEM_MEMORY_NUMA_PERFORMANCE_INFORMATION_INPUT, *PSYSTEM_MEMORY_NUMA_PERFORMANCE_INFORMATION_INPUT; /* size: 0x0010 */

