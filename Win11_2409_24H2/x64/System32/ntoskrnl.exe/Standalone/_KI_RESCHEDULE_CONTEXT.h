typedef enum _KISOLATION_WIDTH
{
  KiIsolationWidthLogicalProcessor = 0,
  KiIsolationWidthCore = 1,
  KiIsolationWidthMax = 2,
} KISOLATION_WIDTH, *PKISOLATION_WIDTH;

typedef struct _KI_RESCHEDULE_CONTEXT_ENTRY
{
  /* 0x0000 */ struct _KPRCB* Prcb;
  /* 0x0008 */ struct _KSHARED_READY_QUEUE* SharedReadyQueue;
  /* 0x0010 */ struct _KTHREAD* CompareThread;
  /* 0x0018 */ struct _KTHREAD* NewThread;
  union
  {
    struct /* bitfield */
    {
      /* 0x0020 */ unsigned char Idle : 1; /* bit position: 0 */
      /* 0x0020 */ unsigned char IsolationWidth : 1; /* bit position: 1 */
      /* 0x0020 */ unsigned char CanCheckDeferredPreemption : 1; /* bit position: 2 */
      /* 0x0020 */ unsigned char PartialYield : 1; /* bit position: 3 */
      /* 0x0020 */ unsigned char FullYield : 1; /* bit position: 4 */
      /* 0x0020 */ unsigned char IsolationPlaceholder : 1; /* bit position: 5 */
      /* 0x0020 */ unsigned char SpareCompateThreadStateFlags : 2; /* bit position: 6 */
    }; /* bitfield */
    /* 0x0020 */ unsigned char AllCompareThreadStateFlags;
  }; /* size: 0x0001 */
  union
  {
    struct /* bitfield */
    {
      /* 0x0021 */ unsigned char ReadyTransition : 1; /* bit position: 0 */
      /* 0x0021 */ unsigned char SpareNewThreadStateFlags : 7; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0021 */ unsigned char AllNewThreadStateFlags;
  }; /* size: 0x0001 */
  union
  {
    struct /* bitfield */
    {
      /* 0x0022 */ unsigned char SkipStandbyReschedule : 1; /* bit position: 0 */
      /* 0x0022 */ unsigned char DoNotSetPreemptionBit : 1; /* bit position: 1 */
      /* 0x0022 */ unsigned char SpareCommitFlags : 6; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0022 */ unsigned char AllCommitFlags;
  }; /* size: 0x0001 */
  union
  {
    struct /* bitfield */
    {
      /* 0x0023 */ unsigned char NewThreadReferenced : 1; /* bit position: 0 */
      /* 0x0023 */ unsigned char LogEtw : 1; /* bit position: 1 */
      /* 0x0023 */ unsigned char IssuePriorityKick : 1; /* bit position: 2 */
      /* 0x0023 */ unsigned char DispatchInterruptIfHalted : 1; /* bit position: 3 */
      /* 0x0023 */ unsigned char DispatchInterruptAlways : 1; /* bit position: 4 */
      /* 0x0023 */ unsigned char SpareCompletionFlags : 3; /* bit position: 5 */
    }; /* bitfield */
    /* 0x0023 */ unsigned char AllCompletionFlags;
  }; /* size: 0x0001 */
  /* 0x0024 */ char KickPriority;
  /* 0x0025 */ unsigned char Spare[3];
} KI_RESCHEDULE_CONTEXT_ENTRY, *PKI_RESCHEDULE_CONTEXT_ENTRY; /* size: 0x0028 */

typedef struct _KI_RESCHEDULE_CONTEXT
{
  /* 0x0000 */ unsigned char ProcessorCount;
  /* 0x0001 */ unsigned char ScanStart;
  /* 0x0004 */ enum _KISOLATION_WIDTH MaximumThreadIsolationWidth;
  /* 0x0008 */ enum _KISOLATION_WIDTH IsolationWidth;
  /* 0x0010 */ struct _KI_RESCHEDULE_CONTEXT_ENTRY ProcessorEntries[4];
} KI_RESCHEDULE_CONTEXT, *PKI_RESCHEDULE_CONTEXT; /* size: 0x00b0 */

