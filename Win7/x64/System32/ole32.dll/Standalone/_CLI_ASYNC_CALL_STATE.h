typedef enum _CLI_ASYNC_CALL_STATE
{
  cacsStart = 0,
  cacsFailedSynchronously = 1,
  cacsNotified = 2,
  cacsInCompletion = 3,
  cacsCompleted = 4,
} CLI_ASYNC_CALL_STATE, *PCLI_ASYNC_CALL_STATE;

