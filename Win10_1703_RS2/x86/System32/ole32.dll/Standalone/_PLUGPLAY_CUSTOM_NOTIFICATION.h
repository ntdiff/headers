typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _PLUGPLAY_NOTIFY_HDR
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ struct _GUID Event;
} PLUGPLAY_NOTIFY_HDR, *PPLUGPLAY_NOTIFY_HDR; /* size: 0x0014 */

typedef struct _PLUGPLAY_CUSTOM_NOTIFICATION
{
  /* 0x0000 */ struct _PLUGPLAY_NOTIFY_HDR HeaderInfo;
  /* 0x0014 */ void* FileObject;
  /* 0x0018 */ long NameBufferOffset;
  /* 0x001c */ unsigned char CustomDataBuffer[1];
  /* 0x001d */ char __PADDING__[3];
} PLUGPLAY_CUSTOM_NOTIFICATION, *PPLUGPLAY_CUSTOM_NOTIFICATION; /* size: 0x0020 */

