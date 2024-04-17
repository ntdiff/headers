typedef struct _EXCEPTION_RECORD64
{
  /* 0x0000 */ long ExceptionCode;
  /* 0x0004 */ unsigned long ExceptionFlags;
  /* 0x0008 */ unsigned __int64 ExceptionRecord;
  /* 0x0010 */ unsigned __int64 ExceptionAddress;
  /* 0x0018 */ unsigned long NumberParameters;
  /* 0x001c */ unsigned long __unusedAlignment;
  /* 0x0020 */ unsigned __int64 ExceptionInformation[15];
} EXCEPTION_RECORD64, *PEXCEPTION_RECORD64; /* size: 0x0098 */

typedef struct _DBGKM_EXCEPTION64
{
  /* 0x0000 */ struct _EXCEPTION_RECORD64 ExceptionRecord;
  /* 0x0098 */ unsigned long FirstChance;
  /* 0x009c */ long __PADDING__[1];
} DBGKM_EXCEPTION64, *PDBGKM_EXCEPTION64; /* size: 0x00a0 */

