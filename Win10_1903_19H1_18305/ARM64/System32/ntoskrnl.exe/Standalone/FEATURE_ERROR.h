struct FEATURE_ERROR
{
  /* 0x0000 */ HRESULT hr;
  /* 0x0004 */ unsigned short lineNumber;
  /* 0x0008 */ const char* file;
  /* 0x0010 */ const char* process;
  /* 0x0018 */ const char* modulePath;
  /* 0x0020 */ unsigned int callerReturnAddressOffset;
  /* 0x0028 */ const char* callerModule;
  /* 0x0030 */ const char* message;
  /* 0x0038 */ unsigned short originLineNumber;
  /* 0x0040 */ const char* originFile;
  /* 0x0048 */ const char* originModule;
  /* 0x0050 */ unsigned int originCallerReturnAddressOffset;
  /* 0x0058 */ const char* originCallerModule;
  /* 0x0060 */ const char* originName;
}; /* size: 0x0068 */

