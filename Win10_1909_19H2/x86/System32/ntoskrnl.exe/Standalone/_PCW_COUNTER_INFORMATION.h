typedef struct _PCW_COUNTER_INFORMATION
{
  /* 0x0000 */ unsigned __int64 CounterMask;
  /* 0x0008 */ const struct _UNICODE_STRING* InstanceMask;
  /* 0x000c */ long __PADDING__[1];
} PCW_COUNTER_INFORMATION, *PPCW_COUNTER_INFORMATION; /* size: 0x0010 */

