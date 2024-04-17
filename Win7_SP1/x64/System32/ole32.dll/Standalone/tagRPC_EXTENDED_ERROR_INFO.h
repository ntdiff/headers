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
  /* 0x0008 */ short Size;
  /* 0x000a */ char __PADDING__[6];
}; /* size: 0x0010 */

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
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ u;
}; /* size: 0x0018 */

struct tagRPC_EXTENDED_ERROR_INFO
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0008 */ wchar_t* ComputerName;
  /* 0x0010 */ unsigned long ProcessID;
  union
  {
    union
    {
      /* 0x0014 */ struct _SYSTEMTIME SystemTime;
      /* 0x0014 */ struct _FILETIME FileTime;
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ u;
  /* 0x0024 */ unsigned long GeneratingComponent;
  /* 0x0028 */ unsigned long Status;
  /* 0x002c */ unsigned short DetectionLocation;
  /* 0x002e */ unsigned short Flags;
  /* 0x0030 */ int NumberOfParameters;
  /* 0x0038 */ struct tagRPC_EE_INFO_PARAM Parameters[4];
}; /* size: 0x0098 */

