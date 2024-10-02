typedef struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME
{
  /* 0x0000 */ struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME* Previous;
  /* 0x0008 */ struct _ACTIVATION_CONTEXT* ActivationContext;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ long __PADDING__[1];
} RTL_ACTIVATION_CONTEXT_STACK_FRAME, *PRTL_ACTIVATION_CONTEXT_STACK_FRAME; /* size: 0x0018 */

typedef struct _RTL_CALLER_ALLOCATED_ACTIVATION_CONTEXT_STACK_FRAME_EXTENDED
{
  /* 0x0000 */ unsigned __int64 Size;
  /* 0x0008 */ unsigned long Format;
  /* 0x0010 */ struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME Frame;
  /* 0x0028 */ void* Extra1;
  /* 0x0030 */ void* Extra2;
  /* 0x0038 */ void* Extra3;
  /* 0x0040 */ void* Extra4;
} RTL_CALLER_ALLOCATED_ACTIVATION_CONTEXT_STACK_FRAME_EXTENDED, *PRTL_CALLER_ALLOCATED_ACTIVATION_CONTEXT_STACK_FRAME_EXTENDED; /* size: 0x0048 */

typedef enum _TPP_CALLBACK_RUN_TYPE
{
  TppCallbackRunTypeNormal = 0,
  TppCallbackRunTypeLong = 1,
  TppCallbackRunTypeIndependent = 2,
  TppCallbackRunTypeShort = 3,
  TppCallbackRunTypeShortUsed = 4,
} TPP_CALLBACK_RUN_TYPE, *PTPP_CALLBACK_RUN_TYPE;

typedef struct _WORKER_FACTORY_DEFERRED_WORK
{
  /* 0x0000 */ struct _PORT_MESSAGE* AlpcSendMessage;
  /* 0x0008 */ void* AlpcSendMessagePort;
  /* 0x0010 */ unsigned long AlpcSendMessageFlags;
  /* 0x0014 */ unsigned long Flags;
} WORKER_FACTORY_DEFERRED_WORK, *PWORKER_FACTORY_DEFERRED_WORK; /* size: 0x0018 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _TP_CALLBACK_INSTANCE
{
  /* 0x0000 */ struct _RTL_CALLER_ALLOCATED_ACTIVATION_CONTEXT_STACK_FRAME_EXTENDED ActivationFrame;
  /* 0x0048 */ enum _TPP_CALLBACK_RUN_TYPE CallbackRunType;
  struct /* bitfield */
  {
    /* 0x004c */ unsigned char ActivationFrameUsed : 1; /* bit position: 0 */
    /* 0x004c */ unsigned char Disassociated : 1; /* bit position: 1 */
    /* 0x004c */ unsigned char UnrecoverableErrorDetected : 1; /* bit position: 2 */
  }; /* bitfield */
  /* 0x0050 */ void* SubProcessTag;
  union
  {
    /* 0x0058 */ void* Callback;
    /* 0x0058 */ void* WorkCallback /* function */;
    /* 0x0058 */ void* SimpleCallback /* function */;
    /* 0x0058 */ void* TimerCallback /* function */;
    /* 0x0058 */ void* WaitCallback /* function */;
    /* 0x0058 */ void* IoCallback /* function */;
    /* 0x0058 */ void* AlpcCallback /* function */;
    /* 0x0058 */ void* AlpcCallbackEx /* function */;
    /* 0x0058 */ void* JobCallback /* function */;
    /* 0x0058 */ void* FinalizationCallback /* function */;
    /* 0x0058 */ void* DirectCallback /* function */;
    /* 0x0058 */ void* TaskCallback /* function */;
  }; /* size: 0x0008 */
  /* 0x0060 */ void* Context;
  union
  {
    /* 0x0068 */ unsigned long SkipPostThreadFlags;
    struct /* bitfield */
    {
      /* 0x0068 */ unsigned long SPActFrame : 1; /* bit position: 0 */
      /* 0x0068 */ unsigned long SPSubProcTag : 1; /* bit position: 1 */
      /* 0x0068 */ unsigned long SPImpersonation : 1; /* bit position: 2 */
      /* 0x0068 */ unsigned long SPThreadInfo : 1; /* bit position: 3 */
      /* 0x0068 */ unsigned long SPTransaction : 1; /* bit position: 4 */
      /* 0x0068 */ unsigned long SPLdrLock : 1; /* bit position: 5 */
      /* 0x0068 */ unsigned long SPLanguages : 1; /* bit position: 6 */
      /* 0x0068 */ unsigned long SPThreadPriBack : 1; /* bit position: 7 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x006c */ unsigned long VerifyThreadFlags;
    /* 0x006c */ unsigned long VThreadInfo : 1; /* bit position: 0 */
  }; /* size: 0x0004 */
  /* 0x0070 */ long PreCallThrdPriority;
  /* 0x0078 */ unsigned __int64 PreCallThrdAffinity;
  /* 0x0080 */ struct _TP_POOL* Pool;
  /* 0x0088 */ struct _TP_ALPC* AlpcWorkItem;
  /* 0x0090 */ unsigned long CallbackEpilogFlags;
  /* 0x0094 */ unsigned long Event;
  /* 0x0098 */ unsigned long Mutex;
  /* 0x009c */ unsigned long Semaphore;
  /* 0x00a0 */ unsigned long SemaphoreReleaseCount;
  /* 0x00a8 */ void* RaceDll;
  /* 0x00b0 */ struct _TP_CLEANUP_GROUP* CleanupGroup;
  /* 0x00b8 */ struct _TPP_CLEANUP_GROUP_MEMBER* CleanupGroupMember;
  /* 0x00c0 */ struct _RTL_CRITICAL_SECTION* CriticalSection;
  /* 0x00c8 */ void* DllHandle;
  /* 0x00d0 */ struct _WORKER_FACTORY_DEFERRED_WORK DeferredWork;
  /* 0x00e8 */ struct _GUID PreviousActivityId;
  /* 0x00f8 */ unsigned __int64 WorkOnBehalf;
} TP_CALLBACK_INSTANCE, *PTP_CALLBACK_INSTANCE; /* size: 0x0100 */

