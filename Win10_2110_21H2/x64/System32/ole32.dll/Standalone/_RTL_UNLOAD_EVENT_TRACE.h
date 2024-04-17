typedef struct _RTL_UNLOAD_EVENT_TRACE
{
  /* 0x0000 */ void* BaseAddress;
  /* 0x0008 */ unsigned __int64 SizeOfImage;
  /* 0x0010 */ unsigned long Sequence;
  /* 0x0014 */ unsigned long TimeDateStamp;
  /* 0x0018 */ unsigned long CheckSum;
  /* 0x001c */ wchar_t ImageName[32];
  /* 0x005c */ unsigned long Version[2];
  /* 0x0064 */ long __PADDING__[1];
} RTL_UNLOAD_EVENT_TRACE, *PRTL_UNLOAD_EVENT_TRACE; /* size: 0x0068 */

