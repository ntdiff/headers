typedef struct _STRING32
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned long Buffer;
} STRING32, *PSTRING32; /* size: 0x0008 */

typedef struct _CURDIR32
{
  /* 0x0000 */ struct _STRING32 DosPath;
  /* 0x0008 */ unsigned long Handle;
} CURDIR32, *PCURDIR32; /* size: 0x000c */

typedef struct _RTL_DRIVE_LETTER_CURDIR32
{
  /* 0x0000 */ unsigned short Flags;
  /* 0x0002 */ unsigned short Length;
  /* 0x0004 */ unsigned long TimeStamp;
  /* 0x0008 */ struct _STRING32 DosPath;
} RTL_DRIVE_LETTER_CURDIR32, *PRTL_DRIVE_LETTER_CURDIR32; /* size: 0x0010 */

typedef struct _RTL_USER_PROCESS_PARAMETERS32
{
  /* 0x0000 */ unsigned long MaximumLength;
  /* 0x0004 */ unsigned long Length;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long DebugFlags;
  /* 0x0010 */ unsigned long ConsoleHandle;
  /* 0x0014 */ unsigned long ConsoleFlags;
  /* 0x0018 */ unsigned long StandardInput;
  /* 0x001c */ unsigned long StandardOutput;
  /* 0x0020 */ unsigned long StandardError;
  /* 0x0024 */ struct _CURDIR32 CurrentDirectory;
  /* 0x0030 */ struct _STRING32 DllPath;
  /* 0x0038 */ struct _STRING32 ImagePathName;
  /* 0x0040 */ struct _STRING32 CommandLine;
  /* 0x0048 */ unsigned long Environment;
  /* 0x004c */ unsigned long StartingX;
  /* 0x0050 */ unsigned long StartingY;
  /* 0x0054 */ unsigned long CountX;
  /* 0x0058 */ unsigned long CountY;
  /* 0x005c */ unsigned long CountCharsX;
  /* 0x0060 */ unsigned long CountCharsY;
  /* 0x0064 */ unsigned long FillAttribute;
  /* 0x0068 */ unsigned long WindowFlags;
  /* 0x006c */ unsigned long ShowWindowFlags;
  /* 0x0070 */ struct _STRING32 WindowTitle;
  /* 0x0078 */ struct _STRING32 DesktopInfo;
  /* 0x0080 */ struct _STRING32 ShellInfo;
  /* 0x0088 */ struct _STRING32 RuntimeData;
  /* 0x0090 */ struct _RTL_DRIVE_LETTER_CURDIR32 CurrentDirectores[32];
  /* 0x0290 */ volatile unsigned long EnvironmentSize;
} RTL_USER_PROCESS_PARAMETERS32, *PRTL_USER_PROCESS_PARAMETERS32; /* size: 0x0294 */

