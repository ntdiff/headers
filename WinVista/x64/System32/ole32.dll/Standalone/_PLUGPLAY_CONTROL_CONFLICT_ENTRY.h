typedef struct _PLUGPLAY_CONTROL_CONFLICT_ENTRY
{
  /* 0x0000 */ unsigned long DeviceInstance;
  /* 0x0004 */ unsigned long DeviceFlags;
  /* 0x0008 */ unsigned long ResourceType;
  /* 0x0010 */ unsigned __int64 ResourceStart;
  /* 0x0018 */ unsigned __int64 ResourceEnd;
  /* 0x0020 */ unsigned long ResourceFlags;
  /* 0x0024 */ long __PADDING__[1];
} PLUGPLAY_CONTROL_CONFLICT_ENTRY, *PPLUGPLAY_CONTROL_CONFLICT_ENTRY; /* size: 0x0028 */

