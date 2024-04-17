struct EHExceptionRecord::EHParameters
{
  /* 0x0000 */ unsigned long magicNumber;
  /* 0x0008 */ void* pExceptionObject;
  /* 0x0010 */ const struct _s_ThrowInfo* pThrowInfo;
  /* 0x0018 */ void* pThrowImageBase;
}; /* size: 0x0020 */

struct EHExceptionRecord
{
  /* 0x0000 */ unsigned long ExceptionCode;
  /* 0x0004 */ unsigned long ExceptionFlags;
  /* 0x0008 */ struct _EXCEPTION_RECORD* ExceptionRecord;
  /* 0x0010 */ void* ExceptionAddress;
  /* 0x0018 */ unsigned long NumberParameters;
  /* 0x0020 */ struct EHExceptionRecord::EHParameters params;
}; /* size: 0x0040 */

