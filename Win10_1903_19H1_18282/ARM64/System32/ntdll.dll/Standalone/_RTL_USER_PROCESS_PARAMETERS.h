typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _CURDIR
{
  /* 0x0000 */ struct _UNICODE_STRING DosPath;
  /* 0x0010 */ void* Handle;
} CURDIR, *PCURDIR; /* size: 0x0018 */

typedef struct _STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ char* Buffer;
} STRING, *PSTRING; /* size: 0x0010 */

typedef struct _RTL_DRIVE_LETTER_CURDIR
{
  /* 0x0000 */ unsigned short Flags;
  /* 0x0002 */ unsigned short Length;
  /* 0x0004 */ unsigned long TimeStamp;
  /* 0x0008 */ struct _STRING DosPath;
} RTL_DRIVE_LETTER_CURDIR, *PRTL_DRIVE_LETTER_CURDIR; /* size: 0x0018 */

typedef struct _RTL_USER_PROCESS_PARAMETERS
{
  /* 0x0000 */ unsigned long MaximumLength;
  /* 0x0004 */ unsigned long Length;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long DebugFlags;
  /* 0x0010 */ void* ConsoleHandle;
  /* 0x0018 */ unsigned long ConsoleFlags;
  /* 0x0020 */ void* StandardInput;
  /* 0x0028 */ void* StandardOutput;
  /* 0x0030 */ void* StandardError;
  /* 0x0038 */ struct _CURDIR CurrentDirectory;
  /* 0x0050 */ struct _UNICODE_STRING DllPath;
  /* 0x0060 */ struct _UNICODE_STRING ImagePathName;
  /* 0x0070 */ struct _UNICODE_STRING CommandLine;
  /* 0x0080 */ void* Environment;
  /* 0x0088 */ unsigned long StartingX;
  /* 0x008c */ unsigned long StartingY;
  /* 0x0090 */ unsigned long CountX;
  /* 0x0094 */ unsigned long CountY;
  /* 0x0098 */ unsigned long CountCharsX;
  /* 0x009c */ unsigned long CountCharsY;
  /* 0x00a0 */ unsigned long FillAttribute;
  /* 0x00a4 */ unsigned long WindowFlags;
  /* 0x00a8 */ unsigned long ShowWindowFlags;
  /* 0x00b0 */ struct _UNICODE_STRING WindowTitle;
  /* 0x00c0 */ struct _UNICODE_STRING DesktopInfo;
  /* 0x00d0 */ struct _UNICODE_STRING ShellInfo;
  /* 0x00e0 */ struct _UNICODE_STRING RuntimeData;
  /* 0x00f0 */ struct _RTL_DRIVE_LETTER_CURDIR CurrentDirectores[32];
  /* 0x03f0 */ unsigned __int64 EnvironmentSize;
  /* 0x03f8 */ unsigned __int64 EnvironmentVersion;
  /* 0x0400 */ void* PackageDependencyData;
  /* 0x0408 */ unsigned long ProcessGroupId;
  /* 0x040c */ unsigned long LoaderThreads;
  /* 0x0410 */ struct _UNICODE_STRING RedirectionDllName;
} RTL_USER_PROCESS_PARAMETERS, *PRTL_USER_PROCESS_PARAMETERS; /* size: 0x0420 */

