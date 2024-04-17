typedef struct _MINIDUMP_USER_STREAM
{
  /* 0x0000 */ unsigned int Type;
  /* 0x0004 */ unsigned long BufferSize;
  /* 0x0008 */ void* Buffer;
} MINIDUMP_USER_STREAM, *PMINIDUMP_USER_STREAM; /* size: 0x000c */

