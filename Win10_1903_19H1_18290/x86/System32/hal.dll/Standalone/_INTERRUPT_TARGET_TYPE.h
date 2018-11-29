typedef enum _INTERRUPT_TARGET_TYPE
{
  InterruptTargetInvalid = 0,
  InterruptTargetAllIncludingSelf = 1,
  InterruptTargetAllExcludingSelf = 2,
  InterruptTargetSelfOnly = 3,
  InterruptTargetPhysical = 4,
  InterruptTargetLogicalFlat = 5,
  InterruptTargetLogicalClustered = 6,
  InterruptTargetRemapIndex = 7,
  InterruptTargetHypervisor = 8,
} INTERRUPT_TARGET_TYPE, *PINTERRUPT_TARGET_TYPE;

