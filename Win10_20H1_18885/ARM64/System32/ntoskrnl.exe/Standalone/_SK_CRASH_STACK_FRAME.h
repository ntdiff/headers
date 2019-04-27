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

