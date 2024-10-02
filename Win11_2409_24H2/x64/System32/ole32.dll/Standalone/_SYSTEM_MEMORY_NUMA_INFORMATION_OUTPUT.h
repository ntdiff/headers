typedef struct _SYSTEM_MEMORY_NUMA_INFORMATION_OUTPUT
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned long InitiatorNode;
  struct
  {
    struct /* bitfield */
    {
      /* 0x000c */ unsigned long IsAttached : 1; /* bit position: 0 */
      /* 0x000c */ unsigned long Reserved : 31; /* bit position: 1 */
    }; /* bitfield */
  } /* size: 0x0004 */ Flags;
} SYSTEM_MEMORY_NUMA_INFORMATION_OUTPUT, *PSYSTEM_MEMORY_NUMA_INFORMATION_OUTPUT; /* size: 0x0010 */

