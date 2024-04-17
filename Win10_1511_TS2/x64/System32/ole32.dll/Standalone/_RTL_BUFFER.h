typedef struct _RTL_BUFFER
{
  /* 0x0000 */ unsigned char* Buffer;
  /* 0x0008 */ unsigned char* StaticBuffer;
  /* 0x0010 */ unsigned __int64 Size;
  /* 0x0018 */ unsigned __int64 StaticSize;
} RTL_BUFFER, *PRTL_BUFFER; /* size: 0x0020 */

