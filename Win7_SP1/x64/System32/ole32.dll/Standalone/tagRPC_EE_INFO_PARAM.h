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

