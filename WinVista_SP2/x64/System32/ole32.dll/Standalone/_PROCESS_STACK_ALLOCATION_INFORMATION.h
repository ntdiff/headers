typedef struct _PROCESS_STACK_ALLOCATION_INFORMATION
{
  /* 0x0000 */ unsigned __int64 ReserveSize;
  /* 0x0008 */ unsigned __int64 ZeroBits;
  /* 0x0010 */ void* StackBase;
} PROCESS_STACK_ALLOCATION_INFORMATION, *PPROCESS_STACK_ALLOCATION_INFORMATION; /* size: 0x0018 */

