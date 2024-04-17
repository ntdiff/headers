typedef struct _MINIDUMP_HANDLE_DATA_STREAM
{
  /* 0x0000 */ unsigned int SizeOfHeader;
  /* 0x0004 */ unsigned int SizeOfDescriptor;
  /* 0x0008 */ unsigned int NumberOfDescriptors;
  /* 0x000c */ unsigned int Reserved;
} MINIDUMP_HANDLE_DATA_STREAM, *PMINIDUMP_HANDLE_DATA_STREAM; /* size: 0x0010 */

