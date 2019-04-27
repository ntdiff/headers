typedef struct _KERNEL_STACK_SEGMENT
{
  /* 0x0000 */ unsigned long StackBase;
  /* 0x0004 */ unsigned long StackLimit;
  /* 0x0008 */ unsigned long KernelStack;
  /* 0x000c */ unsigned long InitialStack;
} KERNEL_STACK_SEGMENT, *PKERNEL_STACK_SEGMENT; /* size: 0x0010 */

