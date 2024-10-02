enum IORING_VERSION
{
  IORING_VERSION_INVALID = 0,
  IORING_VERSION_1 = 1,
  IORING_VERSION_2 = 2,
  IORING_VERSION_3 = 300,
  IORING_VERSION_4 = 400,
};

typedef enum _NT_IORING_CREATE_REQUIRED_FLAGS
{
  NT_IORING_CREATE_REQUIRED_FLAG_NONE = 0,
} NT_IORING_CREATE_REQUIRED_FLAGS, *PNT_IORING_CREATE_REQUIRED_FLAGS;

typedef enum _NT_IORING_CREATE_ADVISORY_FLAGS
{
  NT_IORING_CREATE_ADVISORY_FLAG_NONE = 0,
  NT_IORING_CREATE_SKIP_BUILDER_PARAM_CHECKS = 1,
} NT_IORING_CREATE_ADVISORY_FLAGS, *PNT_IORING_CREATE_ADVISORY_FLAGS;

typedef struct _NT_IORING_CREATE_FLAGS
{
  /* 0x0000 */ enum _NT_IORING_CREATE_REQUIRED_FLAGS Required;
  /* 0x0004 */ enum _NT_IORING_CREATE_ADVISORY_FLAGS Advisory;
} NT_IORING_CREATE_FLAGS, *PNT_IORING_CREATE_FLAGS; /* size: 0x0008 */

typedef struct _NT_IORING_INFO
{
  /* 0x0000 */ enum IORING_VERSION IoRingVersion;
  /* 0x0004 */ struct _NT_IORING_CREATE_FLAGS Flags;
  /* 0x000c */ unsigned int SubmissionQueueSize;
  /* 0x0010 */ unsigned int SubmissionQueueRingMask;
  /* 0x0014 */ unsigned int CompletionQueueSize;
  /* 0x0018 */ unsigned int CompletionQueueRingMask;
  /* 0x0020 */ struct _NT_IORING_SUBMISSION_QUEUE* SubmissionQueue;
  /* 0x0028 */ struct _NT_IORING_COMPLETION_QUEUE* CompletionQueue;
} NT_IORING_INFO, *PNT_IORING_INFO; /* size: 0x0030 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _DISPATCHER_HEADER
{
  union
  {
    /* 0x0000 */ volatile long Lock;
    /* 0x0000 */ long LockNV;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Signalling;
      /* 0x0002 */ unsigned char Size;
      /* 0x0003 */ unsigned char Reserved1;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char TimerType;
      union
      {
        /* 0x0001 */ unsigned char TimerControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Absolute : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char Wake : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char EncodedTolerableDelay : 6; /* bit position: 2 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char Hand;
          union
          {
            /* 0x0003 */ unsigned char TimerMiscFlags;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char Index : 6; /* bit position: 0 */
              /* 0x0003 */ unsigned char Inserted : 1; /* bit position: 6 */
              /* 0x0003 */ volatile unsigned char Expired : 1; /* bit position: 7 */
            }; /* bitfield */
          }; /* size: 0x0001 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char Timer2Type;
      union
      {
        /* 0x0001 */ unsigned char Timer2Flags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Timer2Inserted : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char Timer2Expiring : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char Timer2CancelPending : 1; /* bit position: 2 */
            /* 0x0001 */ unsigned char Timer2SetPending : 1; /* bit position: 3 */
            /* 0x0001 */ unsigned char Timer2Running : 1; /* bit position: 4 */
            /* 0x0001 */ unsigned char Timer2Disabled : 1; /* bit position: 5 */
            /* 0x0001 */ unsigned char Timer2ReservedFlags : 2; /* bit position: 6 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char Timer2ComponentId;
          /* 0x0003 */ unsigned char Timer2RelativeId;
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char QueueType;
      union
      {
        /* 0x0001 */ unsigned char QueueControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Abandoned : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char DisableIncrement : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char QueueReservedControlFlags : 6; /* bit position: 2 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char QueueSize;
          /* 0x0003 */ unsigned char QueueReserved;
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char ThreadType;
      /* 0x0001 */ unsigned char ThreadReserved;
      union
      {
        /* 0x0002 */ unsigned char ThreadControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 0 */
            /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 1 */
            /* 0x0002 */ unsigned char GroupScheduling : 1; /* bit position: 2 */
            /* 0x0002 */ unsigned char AffinitySet : 1; /* bit position: 3 */
            /* 0x0002 */ unsigned char Tagged : 1; /* bit position: 4 */
            /* 0x0002 */ unsigned char EnergyProfiling : 1; /* bit position: 5 */
            /* 0x0002 */ unsigned char SchedulerAssist : 1; /* bit position: 6 */
            /* 0x0002 */ unsigned char ThreadReservedControlFlags : 1; /* bit position: 7 */
          }; /* bitfield */
          union
          {
            /* 0x0003 */ unsigned char DebugActive;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char ActiveDR7 : 1; /* bit position: 0 */
              /* 0x0003 */ unsigned char Instrumented : 1; /* bit position: 1 */
              /* 0x0003 */ unsigned char Minimal : 1; /* bit position: 2 */
              /* 0x0003 */ unsigned char Reserved4 : 2; /* bit position: 3 */
              /* 0x0003 */ unsigned char AltSyscall : 1; /* bit position: 5 */
              /* 0x0003 */ unsigned char Emulation : 1; /* bit position: 6 */
              /* 0x0003 */ unsigned char Reserved5 : 1; /* bit position: 7 */
            }; /* bitfield */
          }; /* size: 0x0001 */
        }; /* size: 0x0002 */
      }; /* size: 0x0002 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char MutantType;
      /* 0x0001 */ unsigned char MutantSize;
      /* 0x0002 */ unsigned char DpcActive;
      /* 0x0003 */ unsigned char MutantReserved;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0018 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0018 */

typedef struct _IORING_OBJECT
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0008 */ struct _NT_IORING_INFO UserInfo;
  /* 0x0038 */ void* Section;
  /* 0x0040 */ struct _NT_IORING_SUBMISSION_QUEUE* SubmissionQueue;
  /* 0x0048 */ struct _MDL* CompletionQueueMdl;
  /* 0x0050 */ struct _NT_IORING_COMPLETION_QUEUE* CompletionQueue;
  /* 0x0058 */ unsigned __int64 ViewSize;
  /* 0x0060 */ long InSubmit;
  /* 0x0068 */ unsigned __int64 CompletionLock;
  /* 0x0070 */ unsigned __int64 SubmitCount;
  /* 0x0078 */ unsigned __int64 CompletionCount;
  /* 0x0080 */ unsigned __int64 CompletionWaitUntil;
  /* 0x0088 */ struct _KEVENT CompletionEvent;
  /* 0x00a0 */ unsigned char SignalCompletionEvent;
  /* 0x00a8 */ struct _KEVENT* CompletionUserEvent;
  /* 0x00b0 */ unsigned int RegBuffersCount;
  /* 0x00b8 */ struct _IOP_MC_BUFFER_ENTRY** RegBuffers;
  /* 0x00c0 */ unsigned int RegFilesCount;
  /* 0x00c8 */ void** RegFiles;
} IORING_OBJECT, *PIORING_OBJECT; /* size: 0x00d0 */

