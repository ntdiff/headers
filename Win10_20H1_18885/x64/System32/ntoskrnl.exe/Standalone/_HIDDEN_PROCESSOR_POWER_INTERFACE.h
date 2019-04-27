typedef struct _HIDDEN_PROCESSOR_POWER_INTERFACE
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0008 */ void* ReadPerfMsr /* function */;
  /* 0x0010 */ void* WritePerfMsr /* function */;
  /* 0x0018 */ void* ReadPerfIoPort /* function */;
  /* 0x0020 */ void* WritePerfIoPort /* function */;
} HIDDEN_PROCESSOR_POWER_INTERFACE, *PHIDDEN_PROCESSOR_POWER_INTERFACE; /* size: 0x0028 */

