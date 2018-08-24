typedef struct _KERNEL_STACK_SEGMENT
{
  /* 0x0000 */ unsigned __int64 StackBase;
  /* 0x0008 */ unsigned __int64 StackLimit;
  /* 0x0010 */ unsigned __int64 KernelStack;
  /* 0x0018 */ unsigned __int64 InitialStack;
  /* 0x0020 */ unsigned __int64 ActualLimit;
} KERNEL_STACK_SEGMENT, *PKERNEL_STACK_SEGMENT; /* size: 0x0028 */

typedef struct _KERNEL_STACK_CONTROL
{
  /* 0x0000 */ struct _KERNEL_STACK_SEGMENT Current;
  /* 0x0028 */ struct _KERNEL_STACK_SEGMENT Previous;
} KERNEL_STACK_CONTROL, *PKERNEL_STACK_CONTROL; /* size: 0x0050 */

