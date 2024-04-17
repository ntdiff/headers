typedef enum _CPU_SET_INFORMATION_TYPE
{
  CpuSetInformation = 0,
} CPU_SET_INFORMATION_TYPE, *PCPU_SET_INFORMATION_TYPE;

typedef struct _SYSTEM_CPU_SET_INFORMATION
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ enum _CPU_SET_INFORMATION_TYPE Type;
  struct
  {
    /* 0x0008 */ unsigned long Id;
    /* 0x000c */ unsigned short Group;
    /* 0x000e */ unsigned char LogicalProcessorIndex;
    /* 0x000f */ unsigned char CoreIndex;
    /* 0x0010 */ unsigned char LastLevelCacheIndex;
    /* 0x0011 */ unsigned char NumaNodeIndex;
    /* 0x0012 */ unsigned char EfficiencyClass;
    union
    {
      /* 0x0013 */ unsigned char AllFlags;
      struct /* bitfield */
      {
        /* 0x0013 */ unsigned char Parked : 1; /* bit position: 0 */
        /* 0x0013 */ unsigned char Allocated : 1; /* bit position: 1 */
        /* 0x0013 */ unsigned char AllocatedToTargetProcess : 1; /* bit position: 2 */
        /* 0x0013 */ unsigned char RealTime : 1; /* bit position: 3 */
        /* 0x0013 */ unsigned char ReservedFlags : 4; /* bit position: 4 */
      }; /* bitfield */
    }; /* size: 0x0001 */
    union
    {
      /* 0x0014 */ unsigned long Reserved;
      /* 0x0014 */ unsigned char SchedulingClass;
    }; /* size: 0x0004 */
    /* 0x0018 */ unsigned __int64 AllocationTag;
  } /* size: 0x0018 */ CpuSet;
} SYSTEM_CPU_SET_INFORMATION, *PSYSTEM_CPU_SET_INFORMATION; /* size: 0x0020 */

