typedef struct _PROCESSOR_POWER_INFORMATION
{
  /* 0x0000 */ unsigned long Number;
  /* 0x0004 */ unsigned long MaxMhz;
  /* 0x0008 */ unsigned long CurrentMhz;
  /* 0x000c */ unsigned long MhzLimit;
  /* 0x0010 */ unsigned long MaxIdleState;
  /* 0x0014 */ unsigned long CurrentIdleState;
} PROCESSOR_POWER_INFORMATION, *PPROCESSOR_POWER_INFORMATION; /* size: 0x0018 */

