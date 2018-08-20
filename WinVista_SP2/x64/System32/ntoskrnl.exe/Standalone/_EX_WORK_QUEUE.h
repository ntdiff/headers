typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _DISPATCHER_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char Type;
      union
      {
        /* 0x0001 */ unsigned char Abandoned;
        /* 0x0001 */ unsigned char Absolute;
        /* 0x0001 */ unsigned char NpxIrql;
        struct
        {
          /* 0x0001 */ unsigned char Signalling;
          union
          {
            /* 0x0002 */ unsigned char Size;
            struct
            {
              /* 0x0002 */ unsigned char Hand;
              union
              {
                /* 0x0003 */ unsigned char Inserted;
                /* 0x0003 */ unsigned char DebugActive;
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
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0018 */

typedef struct _KQUEUE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ struct _LIST_ENTRY EntryListHead;
  /* 0x0028 */ unsigned long CurrentCount;
  /* 0x002c */ unsigned long MaximumCount;
  /* 0x0030 */ struct _LIST_ENTRY ThreadListHead;
} KQUEUE, *PKQUEUE; /* size: 0x0040 */

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
  /* 0x0040 */ unsigned long DynamicThreadCount;
  /* 0x0044 */ unsigned long WorkItemsProcessed;
  /* 0x0048 */ unsigned long WorkItemsProcessedLastPass;
  /* 0x004c */ unsigned long QueueDepthLastPass;
  /* 0x0050 */ union EX_QUEUE_WORKER_INFO Info;
  /* 0x0054 */ long __PADDING__[1];
} EX_WORK_QUEUE, *PEX_WORK_QUEUE; /* size: 0x0058 */

