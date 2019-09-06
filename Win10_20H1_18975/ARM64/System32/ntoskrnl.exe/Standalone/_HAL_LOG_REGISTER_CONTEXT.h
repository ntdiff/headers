typedef struct _HAL_LOG_REGISTER_CONTEXT
{
  /* 0x0000 */ void* LogRoutine /* function */;
  /* 0x0008 */ unsigned long Flag;
  /* 0x000c */ long __PADDING__[1];
} HAL_LOG_REGISTER_CONTEXT, *PHAL_LOG_REGISTER_CONTEXT; /* size: 0x0010 */

