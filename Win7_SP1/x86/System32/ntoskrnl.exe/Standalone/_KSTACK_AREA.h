typedef struct _FNSAVE_FORMAT
{
  /* 0x0000 */ unsigned long ControlWord;
  /* 0x0004 */ unsigned long StatusWord;
  /* 0x0008 */ unsigned long TagWord;
  /* 0x000c */ unsigned long ErrorOffset;
  /* 0x0010 */ unsigned long ErrorSelector;
  /* 0x0014 */ unsigned long DataOffset;
  /* 0x0018 */ unsigned long DataSelector;
  /* 0x001c */ unsigned char RegisterArea[80];
} FNSAVE_FORMAT, *PFNSAVE_FORMAT; /* size: 0x006c */

typedef struct _FXSAVE_FORMAT
{
  /* 0x0000 */ unsigned short ControlWord;
  /* 0x0002 */ unsigned short StatusWord;
  /* 0x0004 */ unsigned short TagWord;
  /* 0x0006 */ unsigned short ErrorOpcode;
  /* 0x0008 */ unsigned long ErrorOffset;
  /* 0x000c */ unsigned long ErrorSelector;
  /* 0x0010 */ unsigned long DataOffset;
  /* 0x0014 */ unsigned long DataSelector;
  /* 0x0018 */ unsigned long MXCsr;
  /* 0x001c */ unsigned long MXCsrMask;
  /* 0x0020 */ unsigned char RegisterArea[128];
  /* 0x00a0 */ unsigned char Reserved3[128];
  /* 0x0120 */ unsigned char Reserved4[192];
} FXSAVE_FORMAT, *PFXSAVE_FORMAT; /* size: 0x01e0 */

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

typedef struct _KSTACK_AREA
{
  union
  {
    /* 0x0000 */ struct _FNSAVE_FORMAT FnArea;
    /* 0x0000 */ struct _FXSAVE_FORMAT NpxFrame;
  }; /* size: 0x01e0 */
  /* 0x01e0 */ struct _KERNEL_STACK_CONTROL StackControl;
  /* 0x01fc */ unsigned long Cr0NpxState;
  /* 0x0200 */ unsigned long Padding[4];
} KSTACK_AREA, *PKSTACK_AREA; /* size: 0x0210 */

