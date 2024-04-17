typedef struct _RTL_SRWLOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0008 */

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
  /* 0x0008 */ class IMessageParam* _pLast;
}; /* size: 0x0010 */

class ASTAIncomingCallList
{
}; /* size: 0x0010 */

struct ASTAState
{
  /* 0x0000 */ struct _RTL_SRWLOCK lock;
  struct /* bitfield */
  {
    /* 0x0008 */ BOOL bInWaitContext : 1; /* bit position: 0 */
    /* 0x0008 */ BOOL bInKernelWait : 1; /* bit position: 1 */
    /* 0x0008 */ BOOL bHandlingPriorityEvents : 1; /* bit position: 2 */
    /* 0x0008 */ BOOL bWaitContextDispatchesAllCalls : 1; /* bit position: 3 */
  }; /* bitfield */
  /* 0x000c */ enum BlockingReason blockingReason;
  /* 0x0010 */ struct _GUID outgoingCallLogicalThreadId;
  /* 0x0020 */ unsigned __int64 uCallTakeANumber;
  /* 0x0028 */ class IMessageParamList priorityEvents;
  /* 0x0038 */ class IMessageParamList deferredOutgoingRemReleaseCalls;
  /* 0x0048 */ class ASTAIncomingCallList dispatchableCalls;
  /* 0x0058 */ class ASTAIncomingCallList queuedCalls;
  /* 0x0068 */ unsigned __int64 uQueuedCallsSequence;
  /* 0x0070 */ unsigned long dwCachedNextQueuedCallTimeout;
  /* 0x0078 */ unsigned __int64 uCachedNextQueuedCallTimeoutSequence;
  /* 0x0080 */ unsigned long dwCurrentKernelWaitTimeout;
  /* 0x0088 */ unsigned __int64 uCurrentKernelWaitInitialTickCount;
}; /* size: 0x0090 */

