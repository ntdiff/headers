typedef struct _PROCESS_EXCEPTION_PORT
{
  /* 0x0000 */ void* ExceptionPortHandle;
  /* 0x0008 */ unsigned long StateFlags;
  /* 0x000c */ long __PADDING__[1];
} PROCESS_EXCEPTION_PORT, *PPROCESS_EXCEPTION_PORT; /* size: 0x0010 */

