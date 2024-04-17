typedef struct _MINIDUMP_VM_POST_READ_CALLBACK
{
  /* 0x0000 */ unsigned __int64 Offset;
  /* 0x0008 */ void* Buffer;
  /* 0x0010 */ unsigned long Size;
  /* 0x0014 */ unsigned long Completed;
  /* 0x0018 */ HRESULT Status;
} MINIDUMP_VM_POST_READ_CALLBACK, *PMINIDUMP_VM_POST_READ_CALLBACK; /* size: 0x001c */

