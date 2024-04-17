typedef struct _RTL_SMART_LBLOB_WRITING_CONTEXT
{
  /* 0x0000 */ unsigned char* CurrentEncodingPosition;
  /* 0x0004 */ unsigned char* EndEncodingPosition;
  /* 0x0008 */ unsigned long BytesWrittenOrRequired;
  /* 0x000c */ unsigned long LongestLegalLength;
  /* 0x0010 */ struct _LBLOB* BufferInUse;
  /* 0x0014 */ struct _LBLOB* FixedSizeBuffer;
  /* 0x0018 */ struct _LBLOB* DynamicBuffer;
  /* 0x001c */ struct _LBLOB** ReturnedBufferUsed;
  /* 0x0020 */ void* ResizePolicy /* function */;
  /* 0x0024 */ void* Reserved1;
  /* 0x0028 */ void* Reserved2;
} RTL_SMART_LBLOB_WRITING_CONTEXT, *PRTL_SMART_LBLOB_WRITING_CONTEXT; /* size: 0x002c */

typedef struct _RTL_SMART_LBLOB_UCSCHAR_WRITING_CONTEXT
{
  /* 0x0000 */ struct _RTL_SMART_LBLOB_WRITING_CONTEXT BlobWritingContext;
  /* 0x002c */ void* EncodingFunction /* function */;
  /* 0x0030 */ void* MultiEncodingFunction /* function */;
} RTL_SMART_LBLOB_UCSCHAR_WRITING_CONTEXT, *PRTL_SMART_LBLOB_UCSCHAR_WRITING_CONTEXT; /* size: 0x0034 */

