typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagOLEVERB
{
  /* 0x0000 */ long lVerb;
  /* 0x0004 */ wchar_t* lpszVerbName;
  /* 0x0008 */ unsigned long fuFlags;
  /* 0x000c */ unsigned long grfAttribs;
}; /* size: 0x0010 */

struct VerbList
{
  /* 0x0000 */ unsigned long cRef;
  /* 0x0004 */ struct _GUID clsid;
  /* 0x0014 */ unsigned long cVerbs;
  /* 0x0018 */ struct tagOLEVERB oleverb[1];
}; /* size: 0x0028 */

