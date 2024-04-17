typedef struct _PLUGPLAY_CONTROL_TARGET_RELATION_DATA
{
  /* 0x0000 */ void* UserFileHandle;
  /* 0x0004 */ long Status;
  /* 0x0008 */ unsigned long DeviceInstanceLen;
  /* 0x000c */ wchar_t* DeviceInstance;
} PLUGPLAY_CONTROL_TARGET_RELATION_DATA, *PPLUGPLAY_CONTROL_TARGET_RELATION_DATA; /* size: 0x0010 */

