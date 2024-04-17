typedef struct _RTL_BUFFER
{
  /* 0x0000 */ unsigned char* Buffer;
  /* 0x0004 */ unsigned char* StaticBuffer;
  /* 0x0008 */ unsigned long Size;
  /* 0x000c */ unsigned long StaticSize;
} RTL_BUFFER, *PRTL_BUFFER; /* size: 0x0010 */

