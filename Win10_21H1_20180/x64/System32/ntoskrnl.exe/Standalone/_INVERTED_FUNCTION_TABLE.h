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

typedef struct _INVERTED_FUNCTION_TABLE
{
  /* 0x0000 */ unsigned long CurrentSize;
  /* 0x0004 */ unsigned long MaximumSize;
  /* 0x0008 */ volatile unsigned long Epoch;
  /* 0x000c */ unsigned char Overflow;
  /* 0x0010 */ struct _INVERTED_FUNCTION_TABLE_ENTRY TableEntry[256];
} INVERTED_FUNCTION_TABLE, *PINVERTED_FUNCTION_TABLE; /* size: 0x1810 */

