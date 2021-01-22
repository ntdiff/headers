typedef struct _POP_FX_DEVICE_DIRECTED_TRANSITION_STATE
{
  /* 0x0000 */ void* CompletionContext;
  /* 0x0008 */ long CompletionStatus;
  struct /* bitfield */
  {
    /* 0x000c */ unsigned long DIrpPending : 1; /* bit position: 0 */
    /* 0x000c */ unsigned long DIrpCompleted : 1; /* bit position: 1 */
  }; /* bitfield */
} POP_FX_DEVICE_DIRECTED_TRANSITION_STATE, *PPOP_FX_DEVICE_DIRECTED_TRANSITION_STATE; /* size: 0x0010 */

