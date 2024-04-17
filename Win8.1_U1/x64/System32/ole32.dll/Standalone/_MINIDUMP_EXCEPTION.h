typedef struct _MINIDUMP_EXCEPTION
{
  /* 0x0000 */ unsigned int ExceptionCode;
  /* 0x0004 */ unsigned int ExceptionFlags;
  /* 0x0008 */ unsigned __int64 ExceptionRecord;
  /* 0x0010 */ unsigned __int64 ExceptionAddress;
  /* 0x0018 */ unsigned int NumberParameters;
  /* 0x001c */ unsigned int __unusedAlignment;
  /* 0x0020 */ unsigned __int64 ExceptionInformation[15];
} MINIDUMP_EXCEPTION, *PMINIDUMP_EXCEPTION; /* size: 0x0098 */

