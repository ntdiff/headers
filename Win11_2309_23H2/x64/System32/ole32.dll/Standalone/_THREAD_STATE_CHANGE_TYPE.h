typedef enum _THREAD_STATE_CHANGE_TYPE
{
  ThreadStateChangeSuspend = 0,
  ThreadStateChangeResume = 1,
  ThreadStateChangeMax = 2,
} THREAD_STATE_CHANGE_TYPE, *PTHREAD_STATE_CHANGE_TYPE;

