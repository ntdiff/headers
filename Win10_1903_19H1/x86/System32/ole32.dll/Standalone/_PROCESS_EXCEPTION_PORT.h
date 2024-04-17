typedef struct _PROCESS_EXCEPTION_PORT
{
  /* 0x0000 */ void* ExceptionPortHandle;
  /* 0x0004 */ unsigned long StateFlags;
} PROCESS_EXCEPTION_PORT, *PPROCESS_EXCEPTION_PORT; /* size: 0x0008 */

