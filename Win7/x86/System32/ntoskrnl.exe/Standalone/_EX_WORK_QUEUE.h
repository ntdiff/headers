typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _DISPATCHER_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char Type;
      union
      {
        /* 0x0001 */ unsigned char TimerControlFlags;
        struct /* bitfield */
        {
          /* 0x0001 */ unsigned char Absolute : 1; /* bit position: 0 */
          /* 0x0001 */ unsigned char Coalescable : 1; /* bit position: 1 */
          /* 0x0001 */ unsigned char KeepShifting : 1; /* bit position: 2 */
          /* 0x0001 */ unsigned char EncodedTolerableDelay : 5; /* bit position: 3 */
        }; /* bitfield */
        /* 0x0001 */ unsigned char Abandoned;
        struct
        {
          /* 0x0001 */ unsigned char Signalling;
          union
          {
            /* 0x0002 */ unsigned char ThreadControlFlags;
            struct /* bitfield */
            {
              /* 0x0002 */ unsigned char CpuThrottled : 1; /* bit position: 0 */
              /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 1 */
              /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 2 */
              /* 0x0002 */ unsigned char Reserved : 5; /* bit position: 3 */
            }; /* bitfield */
            /* 0x0002 */ unsigned char Hand;
            struct
            {
              /* 0x0002 */ unsigned char Size;
              union
              {
                /* 0x0003 */ unsigned char TimerMiscFlags;
                struct /* bitfield */
                {
                  /* 0x0003 */ unsigned char Index : 1; /* bit position: 0 */
                  /* 0x0003 */ unsigned char Processor : 5; /* bit position: 1 */
                  /* 0x0003 */ unsigned char Inserted : 1; /* bit position: 6 */
                  /* 0x0003 */ volatile unsigned char Expired : 1; /* bit position: 7 */
                }; /* bitfield */
                /* 0x0003 */ unsigned char DebugActive;
                struct /* bitfield */
                {
                  /* 0x0003 */ unsigned char ActiveDR7 : 1; /* bit position: 0 */
                  /* 0x0003 */ unsigned char Instrumented : 1; /* bit position: 1 */
                  /* 0x0003 */ unsigned char Reserved2 : 4; /* bit position: 2 */
                  /* 0x0003 */ unsigned char UmsScheduled : 1; /* bit position: 6 */
                  /* 0x0003 */ unsigned char UmsPrimary : 1; /* bit position: 7 */
                }; /* bitfield */
                /* 0x0003 */ unsigned char DpcActive;
              }; /* size: 0x0001 */
            }; /* size: 0x0002 */
          }; /* size: 0x0002 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    /* 0x0000 */ volatile long Lock;
  }; /* size: 0x0004 */
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0010 */

typedef struct _KQUEUE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0010 */ struct _LIST_ENTRY EntryListHead;
  /* 0x0018 */ volatile unsigned long CurrentCount;
  /* 0x001c */ unsigned long MaximumCount;
  /* 0x0020 */ struct _LIST_ENTRY ThreadListHead;
} KQUEUE, *PKQUEUE; /* size: 0x0028 */

union EX_QUEUE_WORKER_INFO
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long QueueDisabled : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long MakeThreadsAsNecessary : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long WaitMode : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long WorkerCount : 29; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0000 */ long QueueWorkerInfo;
  }; /* size: 0x0004 */
}; /* size: 0x0004 */

typedef struct _EX_WORK_QUEUE
{
  /* 0x0000 */ struct _KQUEUE WorkerQueue;
  /* 0x0028 */ unsigned long DynamicThreadCount;
  /* 0x002c */ unsigned long WorkItemsProcessed;
  /* 0x0030 */ unsigned long WorkItemsProcessedLastPass;
  /* 0x0034 */ unsigned long QueueDepthLastPass;
  /* 0x0038 */ union EX_QUEUE_WORKER_INFO Info;
} EX_WORK_QUEUE, *PEX_WORK_QUEUE; /* size: 0x003c */

