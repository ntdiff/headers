typedef struct _IMAGE_FUNCTION_ENTRY
{
  /* 0x0000 */ unsigned long StartingAddress;
  /* 0x0004 */ unsigned long EndingAddress;
  /* 0x0008 */ unsigned long EndOfPrologue;
} IMAGE_FUNCTION_ENTRY, *PIMAGE_FUNCTION_ENTRY; /* size: 0x000c */

