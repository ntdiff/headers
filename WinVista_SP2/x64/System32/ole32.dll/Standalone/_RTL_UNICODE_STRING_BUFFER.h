typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _RTL_BUFFER
{
  /* 0x0000 */ unsigned char* Buffer;
  /* 0x0008 */ unsigned char* StaticBuffer;
  /* 0x0010 */ unsigned __int64 Size;
  /* 0x0018 */ unsigned __int64 StaticSize;
  /* 0x0020 */ unsigned __int64 ReservedForAllocatedSize;
  /* 0x0028 */ void* ReservedForIMalloc;
} RTL_BUFFER, *PRTL_BUFFER; /* size: 0x0030 */

typedef struct _RTL_UNICODE_STRING_BUFFER
{
  /* 0x0000 */ struct _UNICODE_STRING String;
  /* 0x0010 */ struct _RTL_BUFFER ByteBuffer;
  /* 0x0040 */ unsigned char MinimumStaticBufferForTerminalNul[2];
  /* 0x0042 */ char __PADDING__[6];
} RTL_UNICODE_STRING_BUFFER, *PRTL_UNICODE_STRING_BUFFER; /* size: 0x0048 */

