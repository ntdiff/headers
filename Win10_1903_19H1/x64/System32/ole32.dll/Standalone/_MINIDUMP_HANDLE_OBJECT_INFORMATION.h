typedef struct _MINIDUMP_HANDLE_OBJECT_INFORMATION
{
  /* 0x0000 */ unsigned long NextInfoRva;
  /* 0x0004 */ unsigned int InfoType;
  /* 0x0008 */ unsigned int SizeOfInfo;
} MINIDUMP_HANDLE_OBJECT_INFORMATION, *PMINIDUMP_HANDLE_OBJECT_INFORMATION; /* size: 0x000c */

