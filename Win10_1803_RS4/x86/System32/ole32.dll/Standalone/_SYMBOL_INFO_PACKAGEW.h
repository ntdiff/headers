typedef struct _SYMBOL_INFOW
{
  /* 0x0000 */ unsigned long SizeOfStruct;
  /* 0x0004 */ unsigned long TypeIndex;
  /* 0x0008 */ unsigned __int64 Reserved[2];
  /* 0x0018 */ unsigned long Index;
  /* 0x001c */ unsigned long Size;
  /* 0x0020 */ unsigned __int64 ModBase;
  /* 0x0028 */ unsigned long Flags;
  /* 0x0030 */ unsigned __int64 Value;
  /* 0x0038 */ unsigned __int64 Address;
  /* 0x0040 */ unsigned long Register;
  /* 0x0044 */ unsigned long Scope;
  /* 0x0048 */ unsigned long Tag;
  /* 0x004c */ unsigned long NameLen;
  /* 0x0050 */ unsigned long MaxNameLen;
  /* 0x0054 */ wchar_t Name[1];
  /* 0x0056 */ char __PADDING__[2];
} SYMBOL_INFOW, *PSYMBOL_INFOW; /* size: 0x0058 */

typedef struct _SYMBOL_INFO_PACKAGEW
{
  /* 0x0000 */ struct _SYMBOL_INFOW si;
  /* 0x0058 */ wchar_t name[2001];
  /* 0x0ffa */ char __PADDING__[6];
} SYMBOL_INFO_PACKAGEW, *PSYMBOL_INFO_PACKAGEW; /* size: 0x1000 */

