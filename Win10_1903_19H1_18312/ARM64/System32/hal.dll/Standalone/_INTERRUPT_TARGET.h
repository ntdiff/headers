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

typedef struct _INTERRUPT_TARGET
{
  /* 0x0000 */ enum _INTERRUPT_TARGET_TYPE Target;
  union
  {
    /* 0x0008 */ unsigned long PhysicalTarget;
    /* 0x0008 */ unsigned long LogicalFlatTarget;
    /* 0x0008 */ unsigned long RemapIndex;
    struct
    {
      /* 0x0008 */ unsigned long ClusterId;
      /* 0x000c */ unsigned long ClusterMask;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0008 */ unsigned long Low32;
      /* 0x000c */ unsigned long High32;
      /* 0x0010 */ unsigned __int64 InterruptData;
    } /* size: 0x0010 */ HypervisorTarget;
  }; /* size: 0x0010 */
} INTERRUPT_TARGET, *PINTERRUPT_TARGET; /* size: 0x0018 */

