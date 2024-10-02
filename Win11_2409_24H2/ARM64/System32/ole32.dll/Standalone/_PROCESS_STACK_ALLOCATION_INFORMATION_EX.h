typedef struct _PROCESS_STACK_ALLOCATION_INFORMATION
{
  /* 0x0000 */ unsigned __int64 ReserveSize;
  /* 0x0008 */ unsigned __int64 ZeroBits;
  /* 0x0010 */ void* StackBase;
} PROCESS_STACK_ALLOCATION_INFORMATION, *PPROCESS_STACK_ALLOCATION_INFORMATION; /* size: 0x0018 */

typedef struct _PROCESS_STACK_ALLOCATION_INFORMATION_EX
{
  /* 0x0000 */ unsigned long PreferredNode;
  /* 0x0004 */ unsigned long Reserved0;
  /* 0x0008 */ unsigned long Reserved1;
  /* 0x000c */ unsigned long Reserved2;
  /* 0x0010 */ struct _PROCESS_STACK_ALLOCATION_INFORMATION AllocInfo;
} PROCESS_STACK_ALLOCATION_INFORMATION_EX, *PPROCESS_STACK_ALLOCATION_INFORMATION_EX; /* size: 0x0028 */

