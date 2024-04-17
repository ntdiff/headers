typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagPROPBAG2
{
  /* 0x0000 */ unsigned long dwType;
  /* 0x0004 */ unsigned short vt;
  /* 0x0006 */ unsigned short cfType;
  /* 0x0008 */ unsigned long dwHint;
  /* 0x000c */ wchar_t* pstrName;
  /* 0x0010 */ struct _GUID clsid;
}; /* size: 0x0020 */

