typedef struct _NDR64_RANGE_PIPE_FORMAT
{
  /* 0x0000 */ unsigned char FormatCode;
  /* 0x0001 */ unsigned char Flags;
  /* 0x0002 */ unsigned char Alignment;
  /* 0x0003 */ unsigned char Reserved;
  /* 0x0008 */ const void* Type;
  /* 0x0010 */ unsigned int MemorySize;
  /* 0x0014 */ unsigned int BufferSize;
  /* 0x0018 */ unsigned int MinValue;
  /* 0x001c */ unsigned int MaxValue;
} NDR64_RANGE_PIPE_FORMAT, *PNDR64_RANGE_PIPE_FORMAT; /* size: 0x0020 */

