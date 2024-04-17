typedef struct _PROCESS_STACK_ALLOCATION_INFORMATION
{
  /* 0x0000 */ unsigned long ReserveSize;
  /* 0x0004 */ unsigned long ZeroBits;
  /* 0x0008 */ void* StackBase;
} PROCESS_STACK_ALLOCATION_INFORMATION, *PPROCESS_STACK_ALLOCATION_INFORMATION; /* size: 0x000c */

