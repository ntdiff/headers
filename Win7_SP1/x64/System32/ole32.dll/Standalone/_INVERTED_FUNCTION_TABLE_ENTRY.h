typedef struct _INVERTED_FUNCTION_TABLE_ENTRY
{
  /* 0x0000 */ struct _RUNTIME_FUNCTION* FunctionTable;
  /* 0x0008 */ void* ImageBase;
  /* 0x0010 */ unsigned long SizeOfImage;
  /* 0x0014 */ unsigned long SizeOfTable;
} INVERTED_FUNCTION_TABLE_ENTRY, *PINVERTED_FUNCTION_TABLE_ENTRY; /* size: 0x0018 */

