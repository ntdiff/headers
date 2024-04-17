typedef struct _LDR_IMPORT_CALLBACK_INFO
{
  /* 0x0000 */ void* ImportCallbackRoutine /* function */;
  /* 0x0004 */ void* ImportCallbackParameter;
} LDR_IMPORT_CALLBACK_INFO, *PLDR_IMPORT_CALLBACK_INFO; /* size: 0x0008 */

