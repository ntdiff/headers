typedef struct _INTERRUPT_LINE_INTERNAL_STATE
{
  /* 0x0000 */ unsigned char Fixed;
  /* 0x0001 */ unsigned char Irql;
  /* 0x0002 */ unsigned char Swapping;
  /* 0x0004 */ unsigned long OldClusterId;
  /* 0x0008 */ unsigned long OldClusterMask;
  /* 0x000c */ unsigned char LineStateDetermined;
  /* 0x000d */ char __PADDING__[3];
} INTERRUPT_LINE_INTERNAL_STATE, *PINTERRUPT_LINE_INTERNAL_STATE; /* size: 0x0010 */

