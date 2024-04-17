typedef struct _RTL_UNLOAD_EVENT_TRACE64
{
  /* 0x0000 */ unsigned __int64 BaseAddress;
  /* 0x0008 */ unsigned __int64 SizeOfImage;
  /* 0x0010 */ unsigned long Sequence;
  /* 0x0014 */ unsigned long TimeDateStamp;
  /* 0x0018 */ unsigned long CheckSum;
  /* 0x001c */ wchar_t ImageName[32];
  /* 0x005c */ long __PADDING__[1];
} RTL_UNLOAD_EVENT_TRACE64, *PRTL_UNLOAD_EVENT_TRACE64; /* size: 0x0060 */

