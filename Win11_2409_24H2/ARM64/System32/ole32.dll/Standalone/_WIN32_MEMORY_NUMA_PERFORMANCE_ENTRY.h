typedef struct _WIN32_MEMORY_NUMA_PERFORMANCE_ENTRY
{
  /* 0x0000 */ unsigned long InitiatorNodeNumber;
  /* 0x0004 */ unsigned long TargetNodeNumber;
  /* 0x0008 */ unsigned char DataType;
  struct
  {
    struct /* bitfield */
    {
      /* 0x0009 */ unsigned char MinTransferSizeToAchieveValues : 1; /* bit position: 0 */
      /* 0x0009 */ unsigned char NonSequentialTransfers : 1; /* bit position: 1 */
      /* 0x0009 */ unsigned char Reserved : 6; /* bit position: 2 */
    }; /* bitfield */
  } /* size: 0x0001 */ Flags;
  /* 0x0010 */ unsigned __int64 MinTransferSizeInBytes;
  /* 0x0018 */ unsigned __int64 EntryValue;
} WIN32_MEMORY_NUMA_PERFORMANCE_ENTRY, *PWIN32_MEMORY_NUMA_PERFORMANCE_ENTRY; /* size: 0x0020 */

