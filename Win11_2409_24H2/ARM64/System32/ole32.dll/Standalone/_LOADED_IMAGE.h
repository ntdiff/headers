typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _LOADED_IMAGE
{
  /* 0x0000 */ char* ModuleName;
  /* 0x0008 */ void* hFile;
  /* 0x0010 */ unsigned char* MappedAddress;
  /* 0x0018 */ struct _IMAGE_NT_HEADERS64* FileHeader;
  /* 0x0020 */ struct _IMAGE_SECTION_HEADER* LastRvaSection;
  /* 0x0028 */ unsigned long NumberOfSections;
  /* 0x0030 */ struct _IMAGE_SECTION_HEADER* Sections;
  /* 0x0038 */ unsigned long Characteristics;
  /* 0x003c */ unsigned char fSystemImage;
  /* 0x003d */ unsigned char fDOSImage;
  /* 0x003e */ unsigned char fReadOnly;
  /* 0x003f */ unsigned char Version;
  /* 0x0040 */ struct _LIST_ENTRY Links;
  /* 0x0050 */ unsigned long SizeOfImage;
  /* 0x0054 */ long __PADDING__[1];
} LOADED_IMAGE, *PLOADED_IMAGE; /* size: 0x0058 */

