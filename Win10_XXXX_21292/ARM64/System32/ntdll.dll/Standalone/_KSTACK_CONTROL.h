typedef struct _KERNEL_STACK_SEGMENT
{
  /* 0x0000 */ unsigned __int64 StackBase;
  /* 0x0008 */ unsigned __int64 StackLimit;
  /* 0x0010 */ unsigned __int64 KernelStack;
  /* 0x0018 */ unsigned __int64 InitialStack;
} KERNEL_STACK_SEGMENT, *PKERNEL_STACK_SEGMENT; /* size: 0x0020 */

typedef struct _KSTACK_CONTROL
{
  /* 0x0000 */ unsigned __int64 StackBase;
  union
  {
    /* 0x0008 */ unsigned __int64 ActualLimit;
    /* 0x0008 */ unsigned __int64 StackExpansion : 1; /* bit position: 0 */
  }; /* size: 0x0008 */
  /* 0x0010 */ void* CalloutState;
  /* 0x0018 */ void* Padding;
  /* 0x0020 */ struct _KERNEL_STACK_SEGMENT Previous;
} KSTACK_CONTROL, *PKSTACK_CONTROL; /* size: 0x0040 */

