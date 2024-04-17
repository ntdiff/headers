typedef struct _RTL_SRWLOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0004 */

enum BlockingReason
{
  NotBlocking = 0,
  OutgoingCall = 1,
  CoWait = 2,
  ProcessEvents = 3,
};

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class IMessageParamList
{
  /* 0x0000 */ class IMessageParam* _pFirst;
  /* 0x0004 */ class IMessageParam* _pLast;
}; /* size: 0x0008 */

class ASTAIncomingCallList
{
}; /* size: 0x0008 */

struct ASTAState
{
  /* 0x0000 */ struct _RTL_SRWLOCK lock;
  struct /* bitfield */
  {
    /* 0x0004 */ BOOL bInWaitContext : 1; /* bit position: 0 */
    /* 0x0004 */ BOOL bInKernelWait : 1; /* bit position: 1 */
    /* 0x0004 */ BOOL bHandlingPriorityEvents : 1; /* bit position: 2 */
    /* 0x0004 */ BOOL bWaitContextDispatchesAllCalls : 1; /* bit position: 3 */
  }; /* bitfield */
  /* 0x0008 */ enum BlockingReason blockingReason;
  /* 0x000c */ struct _GUID outgoingCallLogicalThreadId;
  /* 0x0020 */ unsigned __int64 uCallTakeANumber;
  /* 0x0028 */ class IMessageParamList priorityEvents;
  /* 0x0030 */ class IMessageParamList deferredOutgoingRemReleaseCalls;
  /* 0x0038 */ class ASTAIncomingCallList dispatchableCalls;
  /* 0x0040 */ class ASTAIncomingCallList queuedCalls;
  /* 0x0048 */ unsigned __int64 uQueuedCallsSequence;
  /* 0x0050 */ unsigned long dwCachedNextQueuedCallTimeout;
  /* 0x0058 */ unsigned __int64 uCachedNextQueuedCallTimeoutSequence;
  /* 0x0060 */ unsigned long dwCurrentKernelWaitTimeout;
  /* 0x0068 */ unsigned __int64 uCurrentKernelWaitInitialTickCount;
}; /* size: 0x0070 */

