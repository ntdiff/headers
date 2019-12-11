struct FEATURE_ERROR
{
  /* 0x0000 */ HRESULT hr;
  /* 0x0004 */ unsigned short lineNumber;
  /* 0x0008 */ const char* file;
  /* 0x000c */ const char* process;
  /* 0x0010 */ const char* modulePath;
  /* 0x0014 */ unsigned int callerReturnAddressOffset;
  /* 0x0018 */ const char* callerModule;
  /* 0x001c */ const char* message;
  /* 0x0020 */ unsigned short originLineNumber;
  /* 0x0024 */ const char* originFile;
  /* 0x0028 */ const char* originModule;
  /* 0x002c */ unsigned int originCallerReturnAddressOffset;
  /* 0x0030 */ const char* originCallerModule;
  /* 0x0034 */ const char* originName;
}; /* size: 0x0038 */

