typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _PLUGPLAY_CONTROL_STATUS_DATA
{
  /* 0x0000 */ struct _UNICODE_STRING DeviceInstance;
  /* 0x0010 */ unsigned long Operation;
  /* 0x0014 */ unsigned long DeviceStatus;
  /* 0x0018 */ unsigned long DeviceProblem;
  /* 0x001c */ unsigned long Flags;
  /* 0x0020 */ long ProblemStatus;
  /* 0x0024 */ long __PADDING__[1];
} PLUGPLAY_CONTROL_STATUS_DATA, *PPLUGPLAY_CONTROL_STATUS_DATA; /* size: 0x0028 */

