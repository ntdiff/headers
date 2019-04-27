typedef struct _LOGGED_STREAM_CALLBACK_V1
{
  /* 0x0000 */ void* LogHandle;
  /* 0x0008 */ void* FlushToLsnRoutine /* function */;
} LOGGED_STREAM_CALLBACK_V1, *PLOGGED_STREAM_CALLBACK_V1; /* size: 0x0010 */

