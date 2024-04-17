typedef struct _EXCEPTION_POINTERS
{
  /* 0x0000 */ struct _EXCEPTION_RECORD* ExceptionRecord;
  /* 0x0008 */ struct _CONTEXT* ContextRecord;
} EXCEPTION_POINTERS, *PEXCEPTION_POINTERS; /* size: 0x0010 */

