typedef struct _PCW_COUNTER_INFORMATION
{
  /* 0x0000 */ unsigned __int64 CounterMask;
  /* 0x0008 */ const struct _UNICODE_STRING* InstanceMask;
  /* 0x000c */ long __PADDING__[1];
} PCW_COUNTER_INFORMATION, *PPCW_COUNTER_INFORMATION; /* size: 0x0010 */

typedef struct _PCW_MASK_INFORMATION
{
  /* 0x0000 */ unsigned __int64 CounterMask;
  /* 0x0008 */ const struct _UNICODE_STRING* InstanceMask;
  /* 0x000c */ unsigned long InstanceId;
  /* 0x0010 */ unsigned char CollectMultiple;
  /* 0x0014 */ struct _PCW_BUFFER* Buffer;
  /* 0x0018 */ struct _KEVENT* CancelEvent;
  /* 0x001c */ long __PADDING__[1];
} PCW_MASK_INFORMATION, *PPCW_MASK_INFORMATION; /* size: 0x0020 */

typedef union _PCW_CALLBACK_INFORMATION
{
  union
  {
    /* 0x0000 */ struct _PCW_COUNTER_INFORMATION AddCounter;
    /* 0x0000 */ struct _PCW_COUNTER_INFORMATION RemoveCounter;
    /* 0x0000 */ struct _PCW_MASK_INFORMATION EnumerateInstances;
    /* 0x0000 */ struct _PCW_MASK_INFORMATION CollectData;
  }; /* size: 0x0020 */
} PCW_CALLBACK_INFORMATION, *PPCW_CALLBACK_INFORMATION; /* size: 0x0020 */

