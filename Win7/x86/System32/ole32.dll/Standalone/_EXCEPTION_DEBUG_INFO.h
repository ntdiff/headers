typedef struct _EXCEPTION_RECORD
{
  /* 0x0000 */ long ExceptionCode;
  /* 0x0004 */ unsigned long ExceptionFlags;
  /* 0x0008 */ struct _EXCEPTION_RECORD* ExceptionRecord;
  /* 0x000c */ void* ExceptionAddress;
  /* 0x0010 */ unsigned long NumberParameters;
  /* 0x0014 */ unsigned long ExceptionInformation[15];
} EXCEPTION_RECORD, *PEXCEPTION_RECORD; /* size: 0x0050 */

typedef struct _EXCEPTION_DEBUG_INFO
{
  /* 0x0000 */ struct _EXCEPTION_RECORD ExceptionRecord;
  /* 0x0050 */ unsigned long dwFirstChance;
} EXCEPTION_DEBUG_INFO, *PEXCEPTION_DEBUG_INFO; /* size: 0x0054 */

