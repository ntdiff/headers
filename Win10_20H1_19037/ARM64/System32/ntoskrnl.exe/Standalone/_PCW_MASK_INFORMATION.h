typedef struct _PCW_MASK_INFORMATION
{
  /* 0x0000 */ unsigned __int64 CounterMask;
  /* 0x0008 */ const struct _UNICODE_STRING* InstanceMask;
  /* 0x0010 */ unsigned long InstanceId;
  /* 0x0014 */ unsigned char CollectMultiple;
  /* 0x0018 */ struct _PCW_BUFFER* Buffer;
  /* 0x0020 */ struct _KEVENT* CancelEvent;
} PCW_MASK_INFORMATION, *PPCW_MASK_INFORMATION; /* size: 0x0028 */

