typedef struct _IMAGE_FUNCTION_ENTRY64
{
  /* 0x0000 */ unsigned __int64 StartingAddress;
  /* 0x0008 */ unsigned __int64 EndingAddress;
  union
  {
    /* 0x0010 */ unsigned __int64 EndOfPrologue;
    /* 0x0010 */ unsigned __int64 UnwindInfoAddress;
  }; /* size: 0x0008 */
} IMAGE_FUNCTION_ENTRY64, *PIMAGE_FUNCTION_ENTRY64; /* size: 0x0018 */

