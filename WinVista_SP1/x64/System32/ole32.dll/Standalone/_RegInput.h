typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _RegInputEntry
{
  /* 0x0000 */ struct _GUID clsid;
  /* 0x0010 */ unsigned __int64 oxid;
  /* 0x0018 */ struct _GUID ipid;
  /* 0x0028 */ unsigned long dwFlags;
  /* 0x002c */ long __PADDING__[1];
} RegInputEntry, *PRegInputEntry; /* size: 0x0030 */

typedef struct _RegInput
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0008 */ struct _RegInputEntry rginent[1];
} RegInput, *PRegInput; /* size: 0x0038 */

