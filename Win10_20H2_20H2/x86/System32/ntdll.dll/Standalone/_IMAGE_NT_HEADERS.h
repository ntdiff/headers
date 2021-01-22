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

typedef struct _IMAGE_DATA_DIRECTORY
{
  /* 0x0000 */ unsigned long VirtualAddress;
  /* 0x0004 */ unsigned long Size;
} IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY; /* size: 0x0008 */

typedef struct _IMAGE_OPTIONAL_HEADER
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
  /* 0x001c */ unsigned long ImageBase;
  /* 0x0020 */ unsigned long SectionAlignment;
  /* 0x0024 */ unsigned long FileAlignment;
  /* 0x0028 */ unsigned short MajorOperatingSystemVersion;
  /* 0x002a */ unsigned short MinorOperatingSystemVersion;
  /* 0x002c */ unsigned short MajorImageVersion;
  /* 0x002e */ unsigned short MinorImageVersion;
  /* 0x0030 */ unsigned short MajorSubsystemVersion;
  /* 0x0032 */ unsigned short MinorSubsystemVersion;
  /* 0x0034 */ unsigned long Win32VersionValue;
  /* 0x0038 */ unsigned long SizeOfImage;
  /* 0x003c */ unsigned long SizeOfHeaders;
  /* 0x0040 */ unsigned long CheckSum;
  /* 0x0044 */ unsigned short Subsystem;
  /* 0x0046 */ unsigned short DllCharacteristics;
  /* 0x0048 */ unsigned long SizeOfStackReserve;
  /* 0x004c */ unsigned long SizeOfStackCommit;
  /* 0x0050 */ unsigned long SizeOfHeapReserve;
  /* 0x0054 */ unsigned long SizeOfHeapCommit;
  /* 0x0058 */ unsigned long LoaderFlags;
  /* 0x005c */ unsigned long NumberOfRvaAndSizes;
  /* 0x0060 */ struct _IMAGE_DATA_DIRECTORY DataDirectory[16];
} IMAGE_OPTIONAL_HEADER, *PIMAGE_OPTIONAL_HEADER; /* size: 0x00e0 */

typedef struct _IMAGE_NT_HEADERS
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ struct _IMAGE_FILE_HEADER FileHeader;
  /* 0x0018 */ struct _IMAGE_OPTIONAL_HEADER OptionalHeader;
} IMAGE_NT_HEADERS, *PIMAGE_NT_HEADERS; /* size: 0x00f8 */

