typedef struct _WOW64_CPUAREA_INFO
{
  union
  {
    /* 0x0000 */ void* Context;
    /* 0x0000 */ struct _X86_CONTEXT* ContextX86;
    /* 0x0000 */ struct _AMD64_CONTEXT* ContextAmd64;
    /* 0x0000 */ struct _ARM_CONTEXT* ContextArm;
    /* 0x0000 */ struct _ARM64_CONTEXT* ContextArm64;
  }; /* size: 0x0008 */
  /* 0x0008 */ void** PerThreadDataLocation;
  /* 0x0010 */ unsigned long* ContextFlagsLocation;
  /* 0x0018 */ unsigned long* CpuAreaFlagsLocation;
  /* 0x0020 */ unsigned long ArchContextFlag;
  /* 0x0024 */ unsigned short Machine;
  /* 0x0026 */ char __PADDING__[2];
} WOW64_CPUAREA_INFO, *PWOW64_CPUAREA_INFO; /* size: 0x0028 */

