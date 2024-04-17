typedef struct _MINIDUMP_READ_MEMORY_FAILURE_CALLBACK
{
  /* 0x0000 */ unsigned __int64 Offset;
  /* 0x0008 */ unsigned long Bytes;
  /* 0x000c */ HRESULT FailureStatus;
} MINIDUMP_READ_MEMORY_FAILURE_CALLBACK, *PMINIDUMP_READ_MEMORY_FAILURE_CALLBACK; /* size: 0x0010 */

