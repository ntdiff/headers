typedef struct _PROCESS_TEB_VALUE_INFORMATION
{
  /* 0x0000 */ unsigned long ThreadId;
  /* 0x0004 */ unsigned long TebOffset;
  /* 0x0008 */ unsigned __int64 Value;
} PROCESS_TEB_VALUE_INFORMATION, *PPROCESS_TEB_VALUE_INFORMATION; /* size: 0x0010 */

