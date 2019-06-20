typedef struct _HEAP_EXTENDED_ENTRY
{
  /* 0x0000 */ void* Reserved;
  union
  {
    struct
    {
      /* 0x0008 */ unsigned short FunctionIndex;
      /* 0x000a */ unsigned short ContextValue;
    }; /* size: 0x0004 */
    /* 0x0008 */ unsigned long InterceptorValue;
  }; /* size: 0x0004 */
  /* 0x000c */ unsigned short UnusedBytesLength;
  /* 0x000e */ unsigned char EntryOffset;
  /* 0x000f */ unsigned char ExtendedBlockSignature;
} HEAP_EXTENDED_ENTRY, *PHEAP_EXTENDED_ENTRY; /* size: 0x0010 */

