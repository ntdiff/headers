typedef enum _WORKER_FUNCTION
{
  NoopFunction = 0,
  ReadAhead = 1,
  WriteBehind = 2,
  LazyWriteScan = 3,
  EventSet = 4,
  AsyncRead = 5,
  CompleteAsyncRead = 6,
  AsyncWriteBehind = 7,
  CompleteAsyncWriteBehind = 8,
} WORKER_FUNCTION, *PWORKER_FUNCTION;

