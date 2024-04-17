typedef struct _IMAGE_RELOCATION
{
  union
  {
    /* 0x0000 */ unsigned long VirtualAddress;
    /* 0x0000 */ unsigned long RelocCount;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned long SymbolTableIndex;
  /* 0x0008 */ unsigned short Type;
} IMAGE_RELOCATION, *PIMAGE_RELOCATION; /* size: 0x000a */

