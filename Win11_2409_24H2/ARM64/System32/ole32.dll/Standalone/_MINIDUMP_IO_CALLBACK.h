typedef struct _MINIDUMP_IO_CALLBACK
{
  /* 0x0000 */ void* Handle;
  /* 0x0008 */ unsigned __int64 Offset;
  /* 0x0010 */ void* Buffer;
  /* 0x0018 */ unsigned long BufferBytes;
} MINIDUMP_IO_CALLBACK, *PMINIDUMP_IO_CALLBACK; /* size: 0x001c */

