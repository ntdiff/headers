typedef struct _MINIDUMP_FUNCTION_TABLE_STREAM
{
  /* 0x0000 */ unsigned int SizeOfHeader;
  /* 0x0004 */ unsigned int SizeOfDescriptor;
  /* 0x0008 */ unsigned int SizeOfNativeDescriptor;
  /* 0x000c */ unsigned int SizeOfFunctionEntry;
  /* 0x0010 */ unsigned int NumberOfDescriptors;
  /* 0x0014 */ unsigned int SizeOfAlignPad;
} MINIDUMP_FUNCTION_TABLE_STREAM, *PMINIDUMP_FUNCTION_TABLE_STREAM; /* size: 0x0018 */

