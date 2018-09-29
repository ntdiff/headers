typedef struct _EVENT_FILTER_HEADER
{
  /* 0x0000 */ unsigned short Id;
  /* 0x0002 */ unsigned char Version;
  /* 0x0003 */ unsigned char Reserved[5];
  /* 0x0008 */ unsigned __int64 InstanceId;
  /* 0x0010 */ unsigned long Size;
  /* 0x0014 */ unsigned long NextOffset;
} EVENT_FILTER_HEADER, *PEVENT_FILTER_HEADER; /* size: 0x0018 */

