typedef struct _IMAGE_LINENUMBER
{
  union
  {
    union
    {
      /* 0x0000 */ unsigned long SymbolTableIndex;
      /* 0x0000 */ unsigned long VirtualAddress;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Type;
  /* 0x0004 */ unsigned short Linenumber;
} IMAGE_LINENUMBER, *PIMAGE_LINENUMBER; /* size: 0x0006 */

