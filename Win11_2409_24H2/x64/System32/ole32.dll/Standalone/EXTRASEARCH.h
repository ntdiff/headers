typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct EXTRASEARCH
{
  /* 0x0000 */ struct _GUID guidSearch;
  /* 0x0010 */ wchar_t wszFriendlyName[80];
  /* 0x00b0 */ wchar_t wszUrl[2084];
}; /* size: 0x10f8 */

