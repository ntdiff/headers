typedef struct _RTL_BARRIER
{
  /* 0x0000 */ volatile long Barrier;
  /* 0x0004 */ long LeftBarrier;
  /* 0x0008 */ void* WaitEvent[2];
  /* 0x0010 */ long TotalProcessors;
  /* 0x0014 */ unsigned long Spins;
} RTL_BARRIER, *PRTL_BARRIER; /* size: 0x0018 */

