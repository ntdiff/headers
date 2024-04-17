typedef struct _IMAGE_DYNAMIC_RELOCATION64_V2
{
  /* 0x0000 */ unsigned long HeaderSize;
  /* 0x0004 */ unsigned long FixupInfoSize;
  /* 0x0008 */ unsigned __int64 Symbol;
  /* 0x0010 */ unsigned long SymbolGroup;
  /* 0x0014 */ unsigned long Flags;
} IMAGE_DYNAMIC_RELOCATION64_V2, *PIMAGE_DYNAMIC_RELOCATION64_V2; /* size: 0x0018 */

