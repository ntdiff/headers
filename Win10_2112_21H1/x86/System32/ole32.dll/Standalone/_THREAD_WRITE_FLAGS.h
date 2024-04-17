typedef enum _THREAD_WRITE_FLAGS
{
  ThreadWriteThread = 1,
  ThreadWriteStack = 2,
  ThreadWriteContext = 4,
  ThreadWriteBackingStore = 8,
  ThreadWriteInstructionWindow = 16,
  ThreadWriteThreadData = 32,
  ThreadWriteThreadInfo = 64,
} THREAD_WRITE_FLAGS, *PTHREAD_WRITE_FLAGS;

