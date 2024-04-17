typedef struct _SYSTEM_ENTROPY_TIMING_INFORMATION
{
  /* 0x0000 */ void* EntropyRoutine /* function */;
  /* 0x0004 */ void* InitializationRoutine /* function */;
  /* 0x0008 */ void* InitializationContext;
} SYSTEM_ENTROPY_TIMING_INFORMATION, *PSYSTEM_ENTROPY_TIMING_INFORMATION; /* size: 0x000c */

