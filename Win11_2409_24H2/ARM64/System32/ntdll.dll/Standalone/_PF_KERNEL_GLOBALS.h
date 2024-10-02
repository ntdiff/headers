typedef struct _PF_KERNEL_GLOBALS
{
  /* 0x0000 */ unsigned __int64 AccessBufferAgeThreshold;
  /* 0x0008 */ long StreamSequenceNumber;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ long ScenarioPrefetchCount;
  /* 0x0014 */ long __PADDING__[1];
} PF_KERNEL_GLOBALS, *PPF_KERNEL_GLOBALS; /* size: 0x0018 */

