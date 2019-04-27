typedef struct _SK_CRASH_MODULE
{
  /* 0x0000 */ wchar_t ImageName[32];
  /* 0x0040 */ unsigned long SizeOfImage;
  /* 0x0044 */ unsigned long TimeDateStamp;
} SK_CRASH_MODULE, *PSK_CRASH_MODULE; /* size: 0x0048 */

typedef struct _SK_CRASH_STACK_FRAME
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long ModuleId;
      /* 0x0004 */ unsigned long Rva;
    }; /* size: 0x0008 */
    /* 0x0000 */ unsigned __int64 Pc;
  }; /* size: 0x0008 */
} SK_CRASH_STACK_FRAME, *PSK_CRASH_STACK_FRAME; /* size: 0x0008 */

typedef struct _SK_CRASH_MINIDUMP
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long Version;
  /* 0x0008 */ unsigned long ModuleCount;
  /* 0x000c */ unsigned long FrameCount;
  /* 0x0010 */ struct _SK_CRASH_MODULE Modules[16];
  /* 0x0490 */ struct _SK_CRASH_STACK_FRAME StackFrames[366];
} SK_CRASH_MINIDUMP, *PSK_CRASH_MINIDUMP; /* size: 0x1000 */

