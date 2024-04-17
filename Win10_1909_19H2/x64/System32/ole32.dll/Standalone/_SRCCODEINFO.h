typedef struct _SRCCODEINFO
{
  /* 0x0000 */ unsigned long SizeOfStruct;
  /* 0x0008 */ void* Key;
  /* 0x0010 */ unsigned __int64 ModBase;
  /* 0x0018 */ char Obj[261];
  /* 0x011d */ char FileName[261];
  /* 0x0224 */ unsigned long LineNumber;
  /* 0x0228 */ unsigned __int64 Address;
} SRCCODEINFO, *PSRCCODEINFO; /* size: 0x0230 */

