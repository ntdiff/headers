typedef struct _ETW_PMC_SUPPORT
{
  /* 0x0000 */ enum _KPROFILE_SOURCE* Source;
  /* 0x0008 */ volatile unsigned long HookIdCount;
  /* 0x000c */ unsigned short HookId[4];
  /* 0x0014 */ volatile unsigned long CountersCount;
  /* 0x0018 */ struct _HAL_PMC_COUNTERS* ProcessorCtrs[1];
} ETW_PMC_SUPPORT, *PETW_PMC_SUPPORT; /* size: 0x0020 */

