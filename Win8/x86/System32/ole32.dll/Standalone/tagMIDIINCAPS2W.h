typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagMIDIINCAPS2W
{
  /* 0x0000 */ unsigned short wMid;
  /* 0x0002 */ unsigned short wPid;
  /* 0x0004 */ unsigned int vDriverVersion;
  /* 0x0008 */ wchar_t szPname[32];
  /* 0x0048 */ unsigned long dwSupport;
  /* 0x004c */ struct _GUID ManufacturerGuid;
  /* 0x005c */ struct _GUID ProductGuid;
  /* 0x006c */ struct _GUID NameGuid;
}; /* size: 0x007c */

