typedef struct _IMAGE_FILE_HEADER
{
  /* 0x0000 */ unsigned short Machine;
  /* 0x0002 */ unsigned short NumberOfSections;
  /* 0x0004 */ unsigned long TimeDateStamp;
  /* 0x0008 */ unsigned long PointerToSymbolTable;
  /* 0x000c */ unsigned long NumberOfSymbols;
  /* 0x0010 */ unsigned short SizeOfOptionalHeader;
  /* 0x0012 */ unsigned short Characteristics;
} IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER; /* size: 0x0014 */

