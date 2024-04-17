typedef struct _SRCCODEINFO
{
  /* 0x0000 */ unsigned long SizeOfStruct;
  /* 0x0004 */ void* Key;
  /* 0x0008 */ unsigned __int64 ModBase;
  /* 0x0010 */ char Obj[261];
  /* 0x0115 */ char FileName[261];
  /* 0x021c */ unsigned long LineNumber;
  /* 0x0220 */ unsigned __int64 Address;
} SRCCODEINFO, *PSRCCODEINFO; /* size: 0x0228 */

