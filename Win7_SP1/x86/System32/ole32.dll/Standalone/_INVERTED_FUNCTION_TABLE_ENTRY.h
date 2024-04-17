typedef struct _INVERTED_FUNCTION_TABLE_ENTRY
{
  /* 0x0000 */ void* FunctionTable;
  /* 0x0004 */ void* ImageBase;
  /* 0x0008 */ unsigned long SizeOfImage;
  /* 0x000c */ unsigned long SizeOfTable;
} INVERTED_FUNCTION_TABLE_ENTRY, *PINVERTED_FUNCTION_TABLE_ENTRY; /* size: 0x0010 */

