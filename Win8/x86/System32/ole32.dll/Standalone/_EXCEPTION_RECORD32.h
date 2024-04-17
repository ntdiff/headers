typedef struct _EXCEPTION_RECORD32
{
  /* 0x0000 */ long ExceptionCode;
  /* 0x0004 */ unsigned long ExceptionFlags;
  /* 0x0008 */ unsigned long ExceptionRecord;
  /* 0x000c */ unsigned long ExceptionAddress;
  /* 0x0010 */ unsigned long NumberParameters;
  /* 0x0014 */ unsigned long ExceptionInformation[15];
} EXCEPTION_RECORD32, *PEXCEPTION_RECORD32; /* size: 0x0050 */

