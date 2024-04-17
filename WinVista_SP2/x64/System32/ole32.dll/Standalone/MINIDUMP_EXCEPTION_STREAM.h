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

typedef struct _MINIDUMP_LOCATION_DESCRIPTOR
{
  /* 0x0000 */ unsigned int DataSize;
  /* 0x0004 */ unsigned long Rva;
} MINIDUMP_LOCATION_DESCRIPTOR, *PMINIDUMP_LOCATION_DESCRIPTOR; /* size: 0x0008 */

struct MINIDUMP_EXCEPTION_STREAM
{
  /* 0x0000 */ unsigned int ThreadId;
  /* 0x0004 */ unsigned int __alignment;
  /* 0x0008 */ struct _MINIDUMP_EXCEPTION ExceptionRecord;
  /* 0x00a0 */ struct _MINIDUMP_LOCATION_DESCRIPTOR ThreadContext;
}; /* size: 0x00a8 */

