typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _PLUGPLAY_CONTROL_CLASS_ASSOCIATION_DATA
{
  /* 0x0000 */ struct _UNICODE_STRING DeviceInstance;
  /* 0x0008 */ struct _GUID* InterfaceGuid;
  /* 0x000c */ struct _UNICODE_STRING Reference;
  /* 0x0014 */ unsigned char Register;
  /* 0x0018 */ wchar_t* SymLink;
  /* 0x001c */ unsigned long SymLinkLength;
} PLUGPLAY_CONTROL_CLASS_ASSOCIATION_DATA, *PPLUGPLAY_CONTROL_CLASS_ASSOCIATION_DATA; /* size: 0x0020 */

