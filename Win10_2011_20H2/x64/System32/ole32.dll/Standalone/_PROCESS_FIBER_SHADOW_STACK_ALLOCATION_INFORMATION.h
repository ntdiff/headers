typedef struct _PROCESS_FIBER_SHADOW_STACK_ALLOCATION_INFORMATION
{
  /* 0x0000 */ unsigned __int64 ReserveSize;
  /* 0x0008 */ unsigned __int64 CommitSize;
  /* 0x0010 */ unsigned long PreferredNode;
  /* 0x0014 */ unsigned long Reserved;
  /* 0x0018 */ void* Ssp;
} PROCESS_FIBER_SHADOW_STACK_ALLOCATION_INFORMATION, *PPROCESS_FIBER_SHADOW_STACK_ALLOCATION_INFORMATION; /* size: 0x0020 */

