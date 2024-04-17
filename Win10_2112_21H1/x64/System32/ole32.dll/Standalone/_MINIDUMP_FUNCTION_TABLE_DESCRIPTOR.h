typedef struct _MINIDUMP_FUNCTION_TABLE_DESCRIPTOR
{
  /* 0x0000 */ unsigned __int64 MinimumAddress;
  /* 0x0008 */ unsigned __int64 MaximumAddress;
  /* 0x0010 */ unsigned __int64 BaseAddress;
  /* 0x0018 */ unsigned int EntryCount;
  /* 0x001c */ unsigned int SizeOfAlignPad;
} MINIDUMP_FUNCTION_TABLE_DESCRIPTOR, *PMINIDUMP_FUNCTION_TABLE_DESCRIPTOR; /* size: 0x0020 */

