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

typedef struct _CREATE_THREAD_DEBUG_INFO
{
  /* 0x0000 */ void* hThread;
  /* 0x0004 */ void* lpThreadLocalBase;
  /* 0x0008 */ void* lpStartAddress /* function */;
} CREATE_THREAD_DEBUG_INFO, *PCREATE_THREAD_DEBUG_INFO; /* size: 0x000c */

typedef struct _CREATE_PROCESS_DEBUG_INFO
{
  /* 0x0000 */ void* hFile;
  /* 0x0004 */ void* hProcess;
  /* 0x0008 */ void* hThread;
  /* 0x000c */ void* lpBaseOfImage;
  /* 0x0010 */ unsigned long dwDebugInfoFileOffset;
  /* 0x0014 */ unsigned long nDebugInfoSize;
  /* 0x0018 */ void* lpThreadLocalBase;
  /* 0x001c */ void* lpStartAddress /* function */;
  /* 0x0020 */ void* lpImageName;
  /* 0x0024 */ unsigned short fUnicode;
  /* 0x0026 */ char __PADDING__[2];
} CREATE_PROCESS_DEBUG_INFO, *PCREATE_PROCESS_DEBUG_INFO; /* size: 0x0028 */

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
  /* 0x0004 */ void* lpBaseOfDll;
  /* 0x0008 */ unsigned long dwDebugInfoFileOffset;
  /* 0x000c */ unsigned long nDebugInfoSize;
  /* 0x0010 */ void* lpImageName;
  /* 0x0014 */ unsigned short fUnicode;
  /* 0x0016 */ char __PADDING__[2];
} LOAD_DLL_DEBUG_INFO, *PLOAD_DLL_DEBUG_INFO; /* size: 0x0018 */

typedef struct _UNLOAD_DLL_DEBUG_INFO
{
  /* 0x0000 */ void* lpBaseOfDll;
} UNLOAD_DLL_DEBUG_INFO, *PUNLOAD_DLL_DEBUG_INFO; /* size: 0x0004 */

typedef struct _OUTPUT_DEBUG_STRING_INFO
{
  /* 0x0000 */ char* lpDebugStringData;
  /* 0x0004 */ unsigned short fUnicode;
  /* 0x0006 */ unsigned short nDebugStringLength;
} OUTPUT_DEBUG_STRING_INFO, *POUTPUT_DEBUG_STRING_INFO; /* size: 0x0008 */

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
      /* 0x000c */ struct _EXCEPTION_DEBUG_INFO Exception;
      /* 0x000c */ struct _CREATE_THREAD_DEBUG_INFO CreateThread;
      /* 0x000c */ struct _CREATE_PROCESS_DEBUG_INFO CreateProcessInfo;
      /* 0x000c */ struct _EXIT_THREAD_DEBUG_INFO ExitThread;
      /* 0x000c */ struct _EXIT_PROCESS_DEBUG_INFO ExitProcess;
      /* 0x000c */ struct _LOAD_DLL_DEBUG_INFO LoadDll;
      /* 0x000c */ struct _UNLOAD_DLL_DEBUG_INFO UnloadDll;
      /* 0x000c */ struct _OUTPUT_DEBUG_STRING_INFO DebugString;
      /* 0x000c */ struct _RIP_INFO RipInfo;
    }; /* size: 0x0054 */
  } /* size: 0x0054 */ u;
} DEBUG_EVENT, *PDEBUG_EVENT; /* size: 0x0060 */

