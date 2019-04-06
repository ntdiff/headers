typedef struct _INVERTED_FUNCTION_TABLE_ENTRY
{
  union
  {
    /* 0x0000 */ struct _IMAGE_RUNTIME_FUNCTION_ENTRY* FunctionTable;
    /* 0x0000 */ struct _DYNAMIC_FUNCTION_TABLE* DynamicTable;
  }; /* size: 0x0008 */
  /* 0x0008 */ void* ImageBase;
  /* 0x0010 */ unsigned long SizeOfImage;
  /* 0x0014 */ unsigned long SizeOfTable;
} INVERTED_FUNCTION_TABLE_ENTRY, *PINVERTED_FUNCTION_TABLE_ENTRY; /* size: 0x0018 */

