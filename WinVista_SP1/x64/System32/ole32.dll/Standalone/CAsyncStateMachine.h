typedef enum _TAG_UNNAMED_18
{
  STATE_WAITINGFORBEGIN = 1,
  STATE_WAITINGFORFINISH = 2,
  STATE_BEGINABORTED = 3,
  STATE_EXECUTINGFINISH = 4,
  STATE_INITIALIZINGOBJECT = 5,
} TAG_UNNAMED_18, *PTAG_UNNAMED_18;

class CAsyncStateMachine
{
  /* 0x0008 */ unsigned long _dwState;
  /* 0x000c */ HRESULT _hr;
  /* 0x0010 */ enum _TAG_UNNAMED_18 eflags;
}; /* size: 0x0018 */

