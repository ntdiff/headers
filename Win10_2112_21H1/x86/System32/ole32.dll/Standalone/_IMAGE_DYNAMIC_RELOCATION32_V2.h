typedef struct _IMAGE_DYNAMIC_RELOCATION32_V2
{
  /* 0x0000 */ unsigned long HeaderSize;
  /* 0x0004 */ unsigned long FixupInfoSize;
  /* 0x0008 */ unsigned long Symbol;
  /* 0x000c */ unsigned long SymbolGroup;
  /* 0x0010 */ unsigned long Flags;
} IMAGE_DYNAMIC_RELOCATION32_V2, *PIMAGE_DYNAMIC_RELOCATION32_V2; /* size: 0x0014 */

