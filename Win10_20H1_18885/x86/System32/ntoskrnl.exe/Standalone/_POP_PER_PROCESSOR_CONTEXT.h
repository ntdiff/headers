typedef struct _POP_PER_PROCESSOR_CONTEXT
{
  /* 0x0000 */ unsigned char* UncompressedData;
  /* 0x0004 */ void* MappingVa;
  /* 0x0008 */ void* XpressEncodeWorkspace;
  /* 0x000c */ unsigned char* CompressedDataBuffer;
  /* 0x0010 */ unsigned __int64 CopyTicks;
  /* 0x0018 */ unsigned __int64 CompressTicks;
  /* 0x0020 */ unsigned __int64 BytesCopied;
  /* 0x0028 */ unsigned __int64 PagesProcessed;
  /* 0x0030 */ unsigned __int64 DecompressTicks;
  /* 0x0038 */ unsigned __int64 ResumeCopyTicks;
  /* 0x0040 */ unsigned __int64 SharedBufferTicks;
  /* 0x0048 */ unsigned __int64 DecompressTicksByMethod[2];
  /* 0x0058 */ unsigned __int64 DecompressSizeByMethod[2];
  /* 0x0068 */ unsigned long CompressCount;
  /* 0x006c */ unsigned long HuffCompressCount;
} POP_PER_PROCESSOR_CONTEXT, *PPOP_PER_PROCESSOR_CONTEXT; /* size: 0x0070 */

