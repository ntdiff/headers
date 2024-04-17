typedef struct _RTL_SMART_LBLOB_WRITING_CONTEXT
{
  /* 0x0000 */ unsigned char* CurrentEncodingPosition;
  /* 0x0008 */ unsigned char* EndEncodingPosition;
  /* 0x0010 */ unsigned __int64 BytesWrittenOrRequired;
  /* 0x0018 */ unsigned __int64 LongestLegalLength;
  /* 0x0020 */ struct _LBLOB* BufferInUse;
  /* 0x0028 */ struct _LBLOB* FixedSizeBuffer;
  /* 0x0030 */ struct _LBLOB* DynamicBuffer;
  /* 0x0038 */ struct _LBLOB** ReturnedBufferUsed;
  /* 0x0040 */ void* ResizePolicy /* function */;
  /* 0x0048 */ void* Reserved1;
  /* 0x0050 */ void* Reserved2;
} RTL_SMART_LBLOB_WRITING_CONTEXT, *PRTL_SMART_LBLOB_WRITING_CONTEXT; /* size: 0x0058 */

