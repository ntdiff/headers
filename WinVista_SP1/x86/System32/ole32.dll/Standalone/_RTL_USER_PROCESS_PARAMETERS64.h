typedef struct _STRING64
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned __int64 Buffer;
} STRING64, *PSTRING64; /* size: 0x0010 */

typedef struct _CURDIR64
{
  /* 0x0000 */ struct _STRING64 DosPath;
  /* 0x0010 */ __int64 Handle;
} CURDIR64, *PCURDIR64; /* size: 0x0018 */

typedef struct _RTL_DRIVE_LETTER_CURDIR64
{
  /* 0x0000 */ unsigned short Flags;
  /* 0x0002 */ unsigned short Length;
  /* 0x0004 */ unsigned long TimeStamp;
  /* 0x0008 */ struct _STRING64 DosPath;
} RTL_DRIVE_LETTER_CURDIR64, *PRTL_DRIVE_LETTER_CURDIR64; /* size: 0x0018 */

typedef struct _RTL_USER_PROCESS_PARAMETERS64
{
  /* 0x0000 */ unsigned long MaximumLength;
  /* 0x0004 */ unsigned long Length;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long DebugFlags;
  /* 0x0010 */ __int64 ConsoleHandle;
  /* 0x0018 */ unsigned long ConsoleFlags;
  /* 0x0020 */ __int64 StandardInput;
  /* 0x0028 */ __int64 StandardOutput;
  /* 0x0030 */ __int64 StandardError;
  /* 0x0038 */ struct _CURDIR64 CurrentDirectory;
  /* 0x0050 */ struct _STRING64 DllPath;
  /* 0x0060 */ struct _STRING64 ImagePathName;
  /* 0x0070 */ struct _STRING64 CommandLine;
  /* 0x0080 */ unsigned __int64 Environment;
  /* 0x0088 */ unsigned long StartingX;
  /* 0x008c */ unsigned long StartingY;
  /* 0x0090 */ unsigned long CountX;
  /* 0x0094 */ unsigned long CountY;
  /* 0x0098 */ unsigned long CountCharsX;
  /* 0x009c */ unsigned long CountCharsY;
  /* 0x00a0 */ unsigned long FillAttribute;
  /* 0x00a4 */ unsigned long WindowFlags;
  /* 0x00a8 */ unsigned long ShowWindowFlags;
  /* 0x00b0 */ struct _STRING64 WindowTitle;
  /* 0x00c0 */ struct _STRING64 DesktopInfo;
  /* 0x00d0 */ struct _STRING64 ShellInfo;
  /* 0x00e0 */ struct _STRING64 RuntimeData;
  /* 0x00f0 */ struct _RTL_DRIVE_LETTER_CURDIR64 CurrentDirectores[32];
  /* 0x03f0 */ volatile unsigned __int64 EnvironmentSize;
} RTL_USER_PROCESS_PARAMETERS64, *PRTL_USER_PROCESS_PARAMETERS64; /* size: 0x03f8 */

