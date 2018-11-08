typedef struct _HAL_LOG_REGISTER_CONTEXT
{
  /* 0x0000 */ void* LogRoutine /* function */;
  /* 0x0004 */ unsigned long Flag;
} HAL_LOG_REGISTER_CONTEXT, *PHAL_LOG_REGISTER_CONTEXT; /* size: 0x0008 */

