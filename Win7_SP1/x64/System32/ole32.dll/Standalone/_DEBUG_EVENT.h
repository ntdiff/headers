typedef struct _EXCEPTION_RECORD
{
  /* 0x0000 */ unsigned long ExceptionCode;
  /* 0x0004 */ unsigned long ExceptionFlags;
  /* 0x0008 */ struct _EXCEPTION_RECORD* ExceptionRecord;
  /* 0x0010 */ void* ExceptionAddress;
  /* 0x0018 */ unsigned long NumberParameters;
  /* 0x0020 */ unsigned __int64 ExceptionInformation[15];
} EXCEPTION_RECORD, *PEXCEPTION_RECORD; /* size: 0x0098 */

typedef struct _EXCEPTION_DEBUG_INFO
{
  /* 0x0000 */ struct _EXCEPTION_RECORD ExceptionRecord;
  /* 0x0098 */ unsigned long dwFirstChance;
  /* 0x009c */ long __PADDING__[1];
} EXCEPTION_DEBUG_INFO, *PEXCEPTION_DEBUG_INFO; /* size: 0x00a0 */

typedef struct _CREATE_THREAD_DEBUG_INFO
{
  /* 0x0000 */ void* hThread;
  /* 0x0008 */ void* lpThreadLocalBase;
  /* 0x0010 */ void* lpStartAddress /* function */;
} CREATE_THREAD_DEBUG_INFO, *PCREATE_THREAD_DEBUG_INFO; /* size: 0x0018 */

typedef struct _CREATE_PROCESS_DEBUG_INFO
{
  /* 0x0000 */ void* hFile;
  /* 0x0008 */ void* hProcess;
  /* 0x0010 */ void* hThread;
  /* 0x0018 */ void* lpBaseOfImage;
  /* 0x0020 */ unsigned long dwDebugInfoFileOffset;
  /* 0x0024 */ unsigned long nDebugInfoSize;
  /* 0x0028 */ void* lpThreadLocalBase;
  /* 0x0030 */ void* lpStartAddress /* function */;
  /* 0x0038 */ void* lpImageName;
  /* 0x0040 */ unsigned short fUnicode;
  /* 0x0042 */ char __PADDING__[6];
} CREATE_PROCESS_DEBUG_INFO, *PCREATE_PROCESS_DEBUG_INFO; /* size: 0x0048 */

typedef struct _EXIT_THREAD_DEBUG_INFO
{
  /* 0x0000 */ unsigned long dwExitCode;
} EXIT_THREAD_DEBUG_INFO, *PEXIT_THREAD_DEBUG_INFO; /* size: 0x0004 */

typedef struct _EXIT_PROCESS_DEBUG_INFO
{
  /* 0x0000 */ unsigned long dwExitCode;
} EXIT_PROCESS_DEBUG_INFO, *PEXIT_PROCESS_DEBUG_INFO; /* size: 0x0004 */

typedef struct _LOAD_DLL_DEBUG_INFO
{
  /* 0x0000 */ void* hFile;
  /* 0x0008 */ void* lpBaseOfDll;
  /* 0x0010 */ unsigned long dwDebugInfoFileOffset;
  /* 0x0014 */ unsigned long nDebugInfoSize;
  /* 0x0018 */ void* lpImageName;
  /* 0x0020 */ unsigned short fUnicode;
  /* 0x0022 */ char __PADDING__[6];
} LOAD_DLL_DEBUG_INFO, *PLOAD_DLL_DEBUG_INFO; /* size: 0x0028 */

typedef struct _UNLOAD_DLL_DEBUG_INFO
{
  /* 0x0000 */ void* lpBaseOfDll;
} UNLOAD_DLL_DEBUG_INFO, *PUNLOAD_DLL_DEBUG_INFO; /* size: 0x0008 */

typedef struct _OUTPUT_DEBUG_STRING_INFO
{
  /* 0x0000 */ char* lpDebugStringData;
  /* 0x0008 */ unsigned short fUnicode;
  /* 0x000a */ unsigned short nDebugStringLength;
  /* 0x000c */ long __PADDING__[1];
} OUTPUT_DEBUG_STRING_INFO, *POUTPUT_DEBUG_STRING_INFO; /* size: 0x0010 */

typedef struct _RIP_INFO
{
  /* 0x0000 */ unsigned long dwError;
  /* 0x0004 */ unsigned long dwType;
} RIP_INFO, *PRIP_INFO; /* size: 0x0008 */

typedef struct _DEBUG_EVENT
{
  /* 0x0000 */ unsigned long dwDebugEventCode;
  /* 0x0004 */ unsigned long dwProcessId;
  /* 0x0008 */ unsigned long dwThreadId;
  union
  {
    union
    {
      /* 0x0010 */ struct _EXCEPTION_DEBUG_INFO Exception;
      /* 0x0010 */ struct _CREATE_THREAD_DEBUG_INFO CreateThread;
      /* 0x0010 */ struct _CREATE_PROCESS_DEBUG_INFO CreateProcessInfo;
      /* 0x0010 */ struct _EXIT_THREAD_DEBUG_INFO ExitThread;
      /* 0x0010 */ struct _EXIT_PROCESS_DEBUG_INFO ExitProcess;
      /* 0x0010 */ struct _LOAD_DLL_DEBUG_INFO LoadDll;
      /* 0x0010 */ struct _UNLOAD_DLL_DEBUG_INFO UnloadDll;
      /* 0x0010 */ struct _OUTPUT_DEBUG_STRING_INFO DebugString;
      /* 0x0010 */ struct _RIP_INFO RipInfo;
    }; /* size: 0x00a0 */
  } /* size: 0x00a0 */ u;
} DEBUG_EVENT, *PDEBUG_EVENT; /* size: 0x00b0 */

