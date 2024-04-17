typedef struct _RTL_UNLOAD_EVENT_TRACE32
{
  /* 0x0000 */ unsigned long BaseAddress;
  /* 0x0004 */ unsigned long SizeOfImage;
  /* 0x0008 */ unsigned long Sequence;
  /* 0x000c */ unsigned long TimeDateStamp;
  /* 0x0010 */ unsigned long CheckSum;
  /* 0x0014 */ wchar_t ImageName[32];
  /* 0x0054 */ unsigned long Version[2];
} RTL_UNLOAD_EVENT_TRACE32, *PRTL_UNLOAD_EVENT_TRACE32; /* size: 0x005c */

