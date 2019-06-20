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

