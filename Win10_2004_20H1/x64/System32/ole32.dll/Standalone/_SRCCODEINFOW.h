typedef struct _SRCCODEINFOW
{
  /* 0x0000 */ unsigned long SizeOfStruct;
  /* 0x0008 */ void* Key;
  /* 0x0010 */ unsigned __int64 ModBase;
  /* 0x0018 */ wchar_t Obj[261];
  /* 0x0222 */ wchar_t FileName[261];
  /* 0x042c */ unsigned long LineNumber;
  /* 0x0430 */ unsigned __int64 Address;
} SRCCODEINFOW, *PSRCCODEINFOW; /* size: 0x0438 */

