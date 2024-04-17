typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _PLUGPLAY_CONTROL_RELATED_DEVICE_DATA
{
  /* 0x0000 */ struct _UNICODE_STRING TargetDeviceInstance;
  /* 0x0008 */ unsigned long Relation;
  /* 0x000c */ wchar_t* RelatedDeviceInstance;
  /* 0x0010 */ unsigned long RelatedDeviceInstanceLength;
} PLUGPLAY_CONTROL_RELATED_DEVICE_DATA, *PPLUGPLAY_CONTROL_RELATED_DEVICE_DATA; /* size: 0x0014 */

