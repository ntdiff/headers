typedef struct _SYSTEM_INTERRUPT_CPU_SET_INFORMATION
{
  /* 0x0000 */ unsigned long Gsiv;
  /* 0x0004 */ unsigned short Group;
  /* 0x0008 */ unsigned __int64 CpuSets;
} SYSTEM_INTERRUPT_CPU_SET_INFORMATION, *PSYSTEM_INTERRUPT_CPU_SET_INFORMATION; /* size: 0x0010 */

