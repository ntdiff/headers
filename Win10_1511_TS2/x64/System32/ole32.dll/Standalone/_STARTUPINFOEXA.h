typedef struct _STARTUPINFOA
{
  /* 0x0000 */ unsigned long cb;
  /* 0x0008 */ char* lpReserved;
  /* 0x0010 */ char* lpDesktop;
  /* 0x0018 */ char* lpTitle;
  /* 0x0020 */ unsigned long dwX;
  /* 0x0024 */ unsigned long dwY;
  /* 0x0028 */ unsigned long dwXSize;
  /* 0x002c */ unsigned long dwYSize;
  /* 0x0030 */ unsigned long dwXCountChars;
  /* 0x0034 */ unsigned long dwYCountChars;
  /* 0x0038 */ unsigned long dwFillAttribute;
  /* 0x003c */ unsigned long dwFlags;
  /* 0x0040 */ unsigned short wShowWindow;
  /* 0x0042 */ unsigned short cbReserved2;
  /* 0x0048 */ unsigned char* lpReserved2;
  /* 0x0050 */ void* hStdInput;
  /* 0x0058 */ void* hStdOutput;
  /* 0x0060 */ void* hStdError;
} STARTUPINFOA, *PSTARTUPINFOA; /* size: 0x0068 */

typedef struct _STARTUPINFOEXA
{
  /* 0x0000 */ struct _STARTUPINFOA StartupInfo;
  /* 0x0068 */ struct _PROC_THREAD_ATTRIBUTE_LIST* lpAttributeList;
} STARTUPINFOEXA, *PSTARTUPINFOEXA; /* size: 0x0070 */

