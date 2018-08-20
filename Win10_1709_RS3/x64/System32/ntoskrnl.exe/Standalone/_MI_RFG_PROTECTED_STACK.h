typedef struct _MI_RFG_PROTECTED_STACK
{
  /* 0x0000 */ void* ControlStackBase;
  /* 0x0008 */ struct _MMVAD_SHORT* ControlStackVad;
  /* 0x0010 */ void* OwnerThread;
} MI_RFG_PROTECTED_STACK, *PMI_RFG_PROTECTED_STACK; /* size: 0x0018 */

