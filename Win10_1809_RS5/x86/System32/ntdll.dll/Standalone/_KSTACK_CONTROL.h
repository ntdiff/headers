typedef struct _KERNEL_STACK_SEGMENT
{
  /* 0x0000 */ unsigned long StackBase;
  /* 0x0004 */ unsigned long StackLimit;
  /* 0x0008 */ unsigned long KernelStack;
  /* 0x000c */ unsigned long InitialStack;
} KERNEL_STACK_SEGMENT, *PKERNEL_STACK_SEGMENT; /* size: 0x0010 */

typedef struct _KSTACK_CONTROL
{
  /* 0x0000 */ unsigned long StackBase;
  union
  {
    /* 0x0004 */ unsigned long ActualLimit;
    /* 0x0004 */ unsigned long StackExpansion : 1; /* bit position: 0 */
  }; /* size: 0x0004 */
  /* 0x0008 */ struct _KTRAP_FRAME* PreviousTrapFrame;
  /* 0x000c */ void* PreviousExceptionList;
  /* 0x0010 */ struct _KERNEL_STACK_SEGMENT Previous;
} KSTACK_CONTROL, *PKSTACK_CONTROL; /* size: 0x0020 */

