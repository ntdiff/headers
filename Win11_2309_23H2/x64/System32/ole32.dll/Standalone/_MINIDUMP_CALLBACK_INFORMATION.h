typedef struct _MINIDUMP_CALLBACK_INFORMATION
{
  /* 0x0000 */ void* CallbackRoutine /* function */;
  /* 0x0008 */ void* CallbackParam;
} MINIDUMP_CALLBACK_INFORMATION, *PMINIDUMP_CALLBACK_INFORMATION; /* size: 0x0010 */

