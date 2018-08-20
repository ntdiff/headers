typedef struct _M128A
{
  /* 0x0000 */ unsigned __int64 Low;
  /* 0x0008 */ __int64 High;
} M128A, *PM128A; /* size: 0x0010 */

typedef struct _XMM_SAVE_AREA32
{
  /* 0x0000 */ unsigned short ControlWord;
  /* 0x0002 */ unsigned short StatusWord;
  /* 0x0004 */ unsigned char TagWord;
  /* 0x0005 */ unsigned char Reserved1;
  /* 0x0006 */ unsigned short ErrorOpcode;
  /* 0x0008 */ unsigned long ErrorOffset;
  /* 0x000c */ unsigned short ErrorSelector;
  /* 0x000e */ unsigned short Reserved2;
  /* 0x0010 */ unsigned long DataOffset;
  /* 0x0014 */ unsigned short DataSelector;
  /* 0x0016 */ unsigned short Reserved3;
  /* 0x0018 */ unsigned long MxCsr;
  /* 0x001c */ unsigned long MxCsr_Mask;
  /* 0x0020 */ struct _M128A FloatRegisters[8];
  /* 0x00a0 */ struct _M128A XmmRegisters[16];
  /* 0x01a0 */ unsigned char Reserved4[96];
} XMM_SAVE_AREA32, *PXMM_SAVE_AREA32; /* size: 0x0200 */

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
  /* 0x0000 */ struct _XMM_SAVE_AREA32 XmmSaveArea;
  /* 0x0200 */ struct _KERNEL_STACK_SEGMENT Current;
  /* 0x0228 */ struct _KERNEL_STACK_SEGMENT Previous;
} KERNEL_STACK_CONTROL, *PKERNEL_STACK_CONTROL; /* size: 0x0250 */

