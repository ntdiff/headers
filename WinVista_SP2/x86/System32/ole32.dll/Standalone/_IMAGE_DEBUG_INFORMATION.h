typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _IMAGE_DEBUG_INFORMATION
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0008 */ unsigned long ReservedSize;
  /* 0x000c */ void* ReservedMappedBase;
  /* 0x0010 */ unsigned short ReservedMachine;
  /* 0x0012 */ unsigned short ReservedCharacteristics;
  /* 0x0014 */ unsigned long ReservedCheckSum;
  /* 0x0018 */ unsigned long ImageBase;
  /* 0x001c */ unsigned long SizeOfImage;
  /* 0x0020 */ unsigned long ReservedNumberOfSections;
  /* 0x0024 */ struct _IMAGE_SECTION_HEADER* ReservedSections;
  /* 0x0028 */ unsigned long ReservedExportedNamesSize;
  /* 0x002c */ char* ReservedExportedNames;
  /* 0x0030 */ unsigned long ReservedNumberOfFunctionTableEntries;
  /* 0x0034 */ struct _IMAGE_FUNCTION_ENTRY* ReservedFunctionTableEntries;
  /* 0x0038 */ unsigned long ReservedLowestFunctionStartingAddress;
  /* 0x003c */ unsigned long ReservedHighestFunctionEndingAddress;
  /* 0x0040 */ unsigned long ReservedNumberOfFpoTableEntries;
  /* 0x0044 */ struct _FPO_DATA* ReservedFpoTableEntries;
  /* 0x0048 */ unsigned long SizeOfCoffSymbols;
  /* 0x004c */ struct _IMAGE_COFF_SYMBOLS_HEADER* CoffSymbols;
  /* 0x0050 */ unsigned long ReservedSizeOfCodeViewSymbols;
  /* 0x0054 */ void* ReservedCodeViewSymbols;
  /* 0x0058 */ char* ImageFilePath;
  /* 0x005c */ char* ImageFileName;
  /* 0x0060 */ char* ReservedDebugFilePath;
  /* 0x0064 */ unsigned long ReservedTimeDateStamp;
  /* 0x0068 */ int ReservedRomImage;
  /* 0x006c */ struct _IMAGE_DEBUG_DIRECTORY* ReservedDebugDirectory;
  /* 0x0070 */ unsigned long ReservedNumberOfDebugDirectories;
  /* 0x0074 */ unsigned long ReservedOriginalFunctionTableBaseAddress;
  /* 0x0078 */ unsigned long Reserved[2];
} IMAGE_DEBUG_INFORMATION, *PIMAGE_DEBUG_INFORMATION; /* size: 0x0080 */

