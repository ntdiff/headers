typedef struct _INVERTED_FUNCTION_TABLE_ENTRY
{
  /* 0x0000 */ void* FunctionTable;
  /* 0x0004 */ void* ImageBase;
  /* 0x0008 */ unsigned long SizeOfImage;
  /* 0x000c */ unsigned long SizeOfTable;
} INVERTED_FUNCTION_TABLE_ENTRY, *PINVERTED_FUNCTION_TABLE_ENTRY; /* size: 0x0010 */

typedef struct _INVERTED_FUNCTION_TABLE
{
  /* 0x0000 */ unsigned long CurrentSize;
  /* 0x0004 */ unsigned long MaximumSize;
  /* 0x0008 */ volatile unsigned long Epoch;
  /* 0x000c */ unsigned char Overflow;
  /* 0x0010 */ struct _INVERTED_FUNCTION_TABLE_ENTRY TableEntry[512];
} INVERTED_FUNCTION_TABLE, *PINVERTED_FUNCTION_TABLE; /* size: 0x2010 */

