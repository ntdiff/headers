typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _RTL_BUFFER
{
  /* 0x0000 */ unsigned char* Buffer;
  /* 0x0004 */ unsigned char* StaticBuffer;
  /* 0x0008 */ unsigned long Size;
  /* 0x000c */ unsigned long StaticSize;
  /* 0x0010 */ unsigned long ReservedForAllocatedSize;
  /* 0x0014 */ void* ReservedForIMalloc;
} RTL_BUFFER, *PRTL_BUFFER; /* size: 0x0018 */

typedef struct _RTL_UNICODE_STRING_BUFFER
{
  /* 0x0000 */ struct _UNICODE_STRING String;
  /* 0x0008 */ struct _RTL_BUFFER ByteBuffer;
  /* 0x0020 */ unsigned char MinimumStaticBufferForTerminalNul[2];
  /* 0x0022 */ char __PADDING__[2];
} RTL_UNICODE_STRING_BUFFER, *PRTL_UNICODE_STRING_BUFFER; /* size: 0x0024 */

