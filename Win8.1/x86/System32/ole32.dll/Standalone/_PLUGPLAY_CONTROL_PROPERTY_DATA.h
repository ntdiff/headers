typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _PLUGPLAY_CONTROL_PROPERTY_DATA
{
  /* 0x0000 */ struct _UNICODE_STRING DeviceInstance;
  /* 0x0008 */ unsigned long PropertyType;
  /* 0x000c */ void* Buffer;
  /* 0x0010 */ unsigned long BufferSize;
} PLUGPLAY_CONTROL_PROPERTY_DATA, *PPLUGPLAY_CONTROL_PROPERTY_DATA; /* size: 0x0014 */

