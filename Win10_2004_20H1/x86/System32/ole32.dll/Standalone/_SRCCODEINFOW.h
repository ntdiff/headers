typedef struct _SRCCODEINFOW
{
  /* 0x0000 */ unsigned long SizeOfStruct;
  /* 0x0004 */ void* Key;
  /* 0x0008 */ unsigned __int64 ModBase;
  /* 0x0010 */ wchar_t Obj[261];
  /* 0x021a */ wchar_t FileName[261];
  /* 0x0424 */ unsigned long LineNumber;
  /* 0x0428 */ unsigned __int64 Address;
} SRCCODEINFOW, *PSRCCODEINFOW; /* size: 0x0430 */

