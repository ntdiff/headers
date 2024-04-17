typedef struct _SYSTEMTIME
{
  /* 0x0000 */ unsigned short wYear;
  /* 0x0002 */ unsigned short wMonth;
  /* 0x0004 */ unsigned short wDayOfWeek;
  /* 0x0006 */ unsigned short wDay;
  /* 0x0008 */ unsigned short wHour;
  /* 0x000a */ unsigned short wMinute;
  /* 0x000c */ unsigned short wSecond;
  /* 0x000e */ unsigned short wMilliseconds;
} SYSTEMTIME, *PSYSTEMTIME; /* size: 0x0010 */

typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

enum tagExtendedErrorParamTypes
{
  eeptAnsiString = 1,
  eeptUnicodeString = 2,
  eeptLongVal = 3,
  eeptShortVal = 4,
  eeptPointerVal = 5,
  eeptNone = 6,
  eeptBinary = 7,
};

struct tagBinaryParam
{
  /* 0x0000 */ void* Buffer;
  /* 0x0004 */ short Size;
  /* 0x0006 */ char __PADDING__[2];
}; /* size: 0x0008 */

struct tagRPC_EE_INFO_PARAM
{
  /* 0x0000 */ enum tagExtendedErrorParamTypes ParameterType;
  union
  {
    union
    {
      /* 0x0008 */ char* AnsiString;
      /* 0x0008 */ wchar_t* UnicodeString;
      /* 0x0008 */ long LVal;
      /* 0x0008 */ short SVal;
      /* 0x0008 */ unsigned __int64 PVal;
      /* 0x0008 */ struct tagBinaryParam BVal;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u;
}; /* size: 0x0010 */

struct tagRPC_EXTENDED_ERROR_INFO
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ wchar_t* ComputerName;
  /* 0x0008 */ unsigned long ProcessID;
  union
  {
    union
    {
      /* 0x000c */ struct _SYSTEMTIME SystemTime;
      /* 0x000c */ struct _FILETIME FileTime;
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ u;
  /* 0x001c */ unsigned long GeneratingComponent;
  /* 0x0020 */ unsigned long Status;
  /* 0x0024 */ unsigned short DetectionLocation;
  /* 0x0026 */ unsigned short Flags;
  /* 0x0028 */ int NumberOfParameters;
  /* 0x0030 */ struct tagRPC_EE_INFO_PARAM Parameters[4];
}; /* size: 0x0070 */

