typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _PLUGPLAY_CONTROL_CLASS_ASSOCIATION_DATA
{
  /* 0x0000 */ struct _UNICODE_STRING DeviceInstance;
  /* 0x0010 */ struct _GUID* InterfaceGuid;
  /* 0x0018 */ struct _UNICODE_STRING Reference;
  /* 0x0028 */ unsigned char Register;
  /* 0x0030 */ wchar_t* SymLink;
  /* 0x0038 */ unsigned long SymLinkLength;
  /* 0x003c */ long __PADDING__[1];
} PLUGPLAY_CONTROL_CLASS_ASSOCIATION_DATA, *PPLUGPLAY_CONTROL_CLASS_ASSOCIATION_DATA; /* size: 0x0040 */

