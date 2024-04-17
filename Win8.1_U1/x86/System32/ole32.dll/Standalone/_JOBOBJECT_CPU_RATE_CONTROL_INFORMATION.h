typedef struct _JOBOBJECT_CPU_RATE_CONTROL_INFORMATION
{
  /* 0x0000 */ unsigned long ControlFlags;
  union
  {
    /* 0x0004 */ unsigned long CpuRate;
    /* 0x0004 */ unsigned long Weight;
  }; /* size: 0x0004 */
} JOBOBJECT_CPU_RATE_CONTROL_INFORMATION, *PJOBOBJECT_CPU_RATE_CONTROL_INFORMATION; /* size: 0x0008 */

