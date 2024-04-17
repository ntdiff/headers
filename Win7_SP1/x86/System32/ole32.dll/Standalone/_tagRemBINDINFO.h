typedef struct _REMSECURITY_ATTRIBUTES
{
  /* 0x0000 */ unsigned long nLength;
  /* 0x0004 */ unsigned long lpSecurityDescriptor;
  /* 0x0008 */ int bInheritHandle;
} REMSECURITY_ATTRIBUTES, *PREMSECURITY_ATTRIBUTES; /* size: 0x000c */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _tagRemBINDINFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ wchar_t* szExtraInfo;
  /* 0x0008 */ unsigned long grfBindInfoF;
  /* 0x000c */ unsigned long dwBindVerb;
  /* 0x0010 */ wchar_t* szCustomVerb;
  /* 0x0014 */ unsigned long cbstgmedData;
  /* 0x0018 */ unsigned long dwOptions;
  /* 0x001c */ unsigned long dwOptionsFlags;
  /* 0x0020 */ unsigned long dwCodePage;
  /* 0x0024 */ struct _REMSECURITY_ATTRIBUTES securityAttributes;
  /* 0x0030 */ struct _GUID iid;
  /* 0x0040 */ struct IUnknown* pUnk;
  /* 0x0044 */ unsigned long dwReserved;
} tagRemBINDINFO, *PtagRemBINDINFO; /* size: 0x0048 */

