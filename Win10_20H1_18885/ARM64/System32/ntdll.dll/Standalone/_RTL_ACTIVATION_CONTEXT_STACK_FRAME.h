typedef struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME
{
  /* 0x0000 */ struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME* Previous;
  /* 0x0008 */ struct _ACTIVATION_CONTEXT* ActivationContext;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ long __PADDING__[1];
} RTL_ACTIVATION_CONTEXT_STACK_FRAME, *PRTL_ACTIVATION_CONTEXT_STACK_FRAME; /* size: 0x0018 */

