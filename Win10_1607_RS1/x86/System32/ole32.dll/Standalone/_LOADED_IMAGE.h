typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _LOADED_IMAGE
{
  /* 0x0000 */ char* ModuleName;
  /* 0x0004 */ void* hFile;
  /* 0x0008 */ unsigned char* MappedAddress;
  /* 0x000c */ struct _IMAGE_NT_HEADERS* FileHeader;
  /* 0x0010 */ struct _IMAGE_SECTION_HEADER* LastRvaSection;
  /* 0x0014 */ unsigned long NumberOfSections;
  /* 0x0018 */ struct _IMAGE_SECTION_HEADER* Sections;
  /* 0x001c */ unsigned long Characteristics;
  /* 0x0020 */ unsigned char fSystemImage;
  /* 0x0021 */ unsigned char fDOSImage;
  /* 0x0022 */ unsigned char fReadOnly;
  /* 0x0023 */ unsigned char Version;
  /* 0x0024 */ struct _LIST_ENTRY Links;
  /* 0x002c */ unsigned long SizeOfImage;
} LOADED_IMAGE, *PLOADED_IMAGE; /* size: 0x0030 */

