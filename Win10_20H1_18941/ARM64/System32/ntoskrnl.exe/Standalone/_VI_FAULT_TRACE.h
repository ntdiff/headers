typedef struct _VI_FAULT_TRACE
{
  /* 0x0000 */ struct _ETHREAD* Thread;
  /* 0x0008 */ void* StackTrace[8];
} VI_FAULT_TRACE, *PVI_FAULT_TRACE; /* size: 0x0048 */

