typedef struct _RTLP_HEAP_SERIALIZED_MAPPING
{
  /* 0x0000 */ unsigned long Allocation;
  /* 0x0004 */ void* StackReference;
  /* 0x0008 */ unsigned long Size;
} RTLP_HEAP_SERIALIZED_MAPPING, *PRTLP_HEAP_SERIALIZED_MAPPING; /* size: 0x000c */

