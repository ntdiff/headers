typedef struct _PROCESS_FIBER_SHADOW_STACK_ALLOCATION_INFORMATION
{
  /* 0x0000 */ unsigned long ReserveSize;
  /* 0x0004 */ unsigned long CommitSize;
  /* 0x0008 */ unsigned long PreferredNode;
  /* 0x000c */ unsigned long Reserved;
  /* 0x0010 */ void* Ssp;
} PROCESS_FIBER_SHADOW_STACK_ALLOCATION_INFORMATION, *PPROCESS_FIBER_SHADOW_STACK_ALLOCATION_INFORMATION; /* size: 0x0014 */

