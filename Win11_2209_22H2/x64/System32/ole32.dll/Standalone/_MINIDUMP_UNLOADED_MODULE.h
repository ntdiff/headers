typedef struct _MINIDUMP_UNLOADED_MODULE
{
  /* 0x0000 */ unsigned __int64 BaseOfImage;
  /* 0x0008 */ unsigned int SizeOfImage;
  /* 0x000c */ unsigned int CheckSum;
  /* 0x0010 */ unsigned int TimeDateStamp;
  /* 0x0014 */ unsigned long ModuleNameRva;
} MINIDUMP_UNLOADED_MODULE, *PMINIDUMP_UNLOADED_MODULE; /* size: 0x0018 */

