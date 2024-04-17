struct EHExceptionRecord::EHParameters
{
  /* 0x0000 */ unsigned long magicNumber;
  /* 0x0004 */ void* pExceptionObject;
  /* 0x0008 */ const struct _s_ThrowInfo* pThrowInfo;
}; /* size: 0x000c */

struct EHExceptionRecord
{
  /* 0x0000 */ unsigned long ExceptionCode;
  /* 0x0004 */ unsigned long ExceptionFlags;
  /* 0x0008 */ struct _EXCEPTION_RECORD* ExceptionRecord;
  /* 0x000c */ void* ExceptionAddress;
  /* 0x0010 */ unsigned long NumberParameters;
  /* 0x0014 */ struct EHExceptionRecord::EHParameters params;
}; /* size: 0x0020 */

