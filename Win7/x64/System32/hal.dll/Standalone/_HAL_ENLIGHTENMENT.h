typedef struct _HAL_ENLIGHTENMENT
{
  /* 0x0000 */ unsigned long Enlightenments;
  /* 0x0004 */ unsigned long HypervisorConnected;
  /* 0x0008 */ void* EndOfInterrupt /* function */;
  /* 0x0010 */ void* ApicWriteIcr /* function */;
  /* 0x0018 */ unsigned long Reserved0;
  /* 0x001c */ unsigned long SpinCountMask;
  /* 0x0020 */ void* LongSpinWait /* function */;
  /* 0x0028 */ void* GetReferenceTime /* function */;
} HAL_ENLIGHTENMENT, *PHAL_ENLIGHTENMENT; /* size: 0x0030 */

