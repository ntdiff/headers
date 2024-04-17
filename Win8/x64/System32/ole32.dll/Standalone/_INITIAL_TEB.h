typedef struct _INITIAL_TEB
{
  struct
  {
    /* 0x0000 */ void* OldStackBase;
    /* 0x0008 */ void* OldStackLimit;
  } /* size: 0x0010 */ OldInitialTeb;
  /* 0x0010 */ void* StackBase;
  /* 0x0018 */ void* StackLimit;
  /* 0x0020 */ void* StackAllocationBase;
} INITIAL_TEB, *PINITIAL_TEB; /* size: 0x0028 */

