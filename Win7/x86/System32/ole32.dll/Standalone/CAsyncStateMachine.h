typedef enum _TAG_UNNAMED_186
{
  STATE_WAITINGFORBEGIN = 1,
  STATE_WAITINGFORFINISH = 2,
  STATE_BEGINABORTED = 3,
  STATE_EXECUTINGFINISH = 4,
  STATE_INITIALIZINGOBJECT = 5,
} TAG_UNNAMED_186, *PTAG_UNNAMED_186;

class CAsyncStateMachine
{
  /* 0x0004 */ unsigned long _dwState;
  /* 0x0008 */ HRESULT _hr;
  /* 0x000c */ enum _TAG_UNNAMED_186 eflags;
}; /* size: 0x0010 */

