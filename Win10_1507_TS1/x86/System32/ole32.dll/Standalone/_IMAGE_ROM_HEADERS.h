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

typedef struct _IMAGE_ROM_OPTIONAL_HEADER
{
  /* 0x0000 */ unsigned short Magic;
  /* 0x0002 */ unsigned char MajorLinkerVersion;
  /* 0x0003 */ unsigned char MinorLinkerVersion;
  /* 0x0004 */ unsigned long SizeOfCode;
  /* 0x0008 */ unsigned long SizeOfInitializedData;
  /* 0x000c */ unsigned long SizeOfUninitializedData;
  /* 0x0010 */ unsigned long AddressOfEntryPoint;
  /* 0x0014 */ unsigned long BaseOfCode;
  /* 0x0018 */ unsigned long BaseOfData;
  /* 0x001c */ unsigned long BaseOfBss;
  /* 0x0020 */ unsigned long GprMask;
  /* 0x0024 */ unsigned long CprMask[4];
  /* 0x0034 */ unsigned long GpValue;
} IMAGE_ROM_OPTIONAL_HEADER, *PIMAGE_ROM_OPTIONAL_HEADER; /* size: 0x0038 */

typedef struct _IMAGE_ROM_HEADERS
{
  /* 0x0000 */ struct _IMAGE_FILE_HEADER FileHeader;
  /* 0x0014 */ struct _IMAGE_ROM_OPTIONAL_HEADER OptionalHeader;
} IMAGE_ROM_HEADERS, *PIMAGE_ROM_HEADERS; /* size: 0x004c */

