typedef struct _SK_CRASH_MODULE
{
  /* 0x0000 */ wchar_t ImageName[32];
  /* 0x0040 */ unsigned long SizeOfImage;
  /* 0x0044 */ unsigned long TimeDateStamp;
} SK_CRASH_MODULE, *PSK_CRASH_MODULE; /* size: 0x0048 */

