typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _PLUGPLAY_CONTROL_RELATED_DEVICE_DATA
{
  /* 0x0000 */ struct _UNICODE_STRING TargetDeviceInstance;
  /* 0x0010 */ unsigned long Relation;
  /* 0x0018 */ wchar_t* RelatedDeviceInstance;
  /* 0x0020 */ unsigned long RelatedDeviceInstanceLength;
  /* 0x0024 */ long __PADDING__[1];
} PLUGPLAY_CONTROL_RELATED_DEVICE_DATA, *PPLUGPLAY_CONTROL_RELATED_DEVICE_DATA; /* size: 0x0028 */

