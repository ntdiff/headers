typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagMIDIOUTCAPS2W
{
  /* 0x0000 */ unsigned short wMid;
  /* 0x0002 */ unsigned short wPid;
  /* 0x0004 */ unsigned int vDriverVersion;
  /* 0x0008 */ wchar_t szPname[32];
  /* 0x0048 */ unsigned short wTechnology;
  /* 0x004a */ unsigned short wVoices;
  /* 0x004c */ unsigned short wNotes;
  /* 0x004e */ unsigned short wChannelMask;
  /* 0x0050 */ unsigned long dwSupport;
  /* 0x0054 */ struct _GUID ManufacturerGuid;
  /* 0x0064 */ struct _GUID ProductGuid;
  /* 0x0074 */ struct _GUID NameGuid;
}; /* size: 0x0084 */

