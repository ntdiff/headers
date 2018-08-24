typedef struct _KERNEL_STACK_SEGMENT
{
  /* 0x0000 */ unsigned long StackBase;
  /* 0x0004 */ unsigned long StackLimit;
  /* 0x0008 */ unsigned long KernelStack;
  /* 0x000c */ unsigned long InitialStack;
  /* 0x0010 */ unsigned long ActualLimit;
} KERNEL_STACK_SEGMENT, *PKERNEL_STACK_SEGMENT; /* size: 0x0014 */

typedef struct _KERNEL_STACK_CONTROL
{
  union
  {
    /* 0x0000 */ struct _KTRAP_FRAME* PreviousTrapFrame;
    /* 0x0000 */ void* PreviousExceptionList;
  }; /* size: 0x0004 */
  union
  {
    /* 0x0004 */ unsigned long StackControlFlags;
    struct /* bitfield */
    {
      /* 0x0004 */ unsigned long PreviousLargeStack : 1; /* bit position: 0 */
      /* 0x0004 */ unsigned long PreviousSegmentsPresent : 1; /* bit position: 1 */
      /* 0x0004 */ unsigned long ExpandCalloutStack : 1; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0008 */ struct _KERNEL_STACK_SEGMENT Previous;
} KERNEL_STACK_CONTROL, *PKERNEL_STACK_CONTROL; /* size: 0x001c */

