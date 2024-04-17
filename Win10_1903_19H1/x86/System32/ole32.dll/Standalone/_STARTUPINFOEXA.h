typedef struct _STARTUPINFOA
{
  /* 0x0000 */ unsigned long cb;
  /* 0x0004 */ char* lpReserved;
  /* 0x0008 */ char* lpDesktop;
  /* 0x000c */ char* lpTitle;
  /* 0x0010 */ unsigned long dwX;
  /* 0x0014 */ unsigned long dwY;
  /* 0x0018 */ unsigned long dwXSize;
  /* 0x001c */ unsigned long dwYSize;
  /* 0x0020 */ unsigned long dwXCountChars;
  /* 0x0024 */ unsigned long dwYCountChars;
  /* 0x0028 */ unsigned long dwFillAttribute;
  /* 0x002c */ unsigned long dwFlags;
  /* 0x0030 */ unsigned short wShowWindow;
  /* 0x0032 */ unsigned short cbReserved2;
  /* 0x0034 */ unsigned char* lpReserved2;
  /* 0x0038 */ void* hStdInput;
  /* 0x003c */ void* hStdOutput;
  /* 0x0040 */ void* hStdError;
} STARTUPINFOA, *PSTARTUPINFOA; /* size: 0x0044 */

typedef struct _STARTUPINFOEXA
{
  /* 0x0000 */ struct _STARTUPINFOA StartupInfo;
  /* 0x0044 */ struct _PROC_THREAD_ATTRIBUTE_LIST* lpAttributeList;
} STARTUPINFOEXA, *PSTARTUPINFOEXA; /* size: 0x0048 */

