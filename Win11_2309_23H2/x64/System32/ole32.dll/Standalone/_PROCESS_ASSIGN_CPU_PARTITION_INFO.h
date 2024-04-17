typedef struct _PROCESS_ASSIGN_CPU_PARTITION_INFO
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long CpuPartitionCount;
  /* 0x0008 */ void* CpuPartitionHandles[1];
} PROCESS_ASSIGN_CPU_PARTITION_INFO, *PPROCESS_ASSIGN_CPU_PARTITION_INFO; /* size: 0x0010 */

