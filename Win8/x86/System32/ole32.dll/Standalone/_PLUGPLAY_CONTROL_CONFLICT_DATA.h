typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _PLUGPLAY_CONTROL_CONFLICT_DATA
{
  /* 0x0000 */ struct _UNICODE_STRING DeviceInstance;
  /* 0x0008 */ struct _CM_RESOURCE_LIST* ResourceList;
  /* 0x000c */ unsigned long ResourceListSize;
  /* 0x0010 */ struct _PLUGPLAY_CONTROL_CONFLICT_LIST* ConflictBuffer;
  /* 0x0014 */ unsigned long ConflictBufferSize;
  /* 0x0018 */ unsigned long Flags;
  /* 0x001c */ long Status;
} PLUGPLAY_CONTROL_CONFLICT_DATA, *PPLUGPLAY_CONTROL_CONFLICT_DATA; /* size: 0x0020 */

