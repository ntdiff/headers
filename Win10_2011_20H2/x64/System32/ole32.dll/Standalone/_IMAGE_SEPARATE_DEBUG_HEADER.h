typedef struct _IMAGE_SEPARATE_DEBUG_HEADER
{
  /* 0x0000 */ unsigned short Signature;
  /* 0x0002 */ unsigned short Flags;
  /* 0x0004 */ unsigned short Machine;
  /* 0x0006 */ unsigned short Characteristics;
  /* 0x0008 */ unsigned long TimeDateStamp;
  /* 0x000c */ unsigned long CheckSum;
  /* 0x0010 */ unsigned long ImageBase;
  /* 0x0014 */ unsigned long SizeOfImage;
  /* 0x0018 */ unsigned long NumberOfSections;
  /* 0x001c */ unsigned long ExportedNamesSize;
  /* 0x0020 */ unsigned long DebugDirectorySize;
  /* 0x0024 */ unsigned long SectionAlignment;
  /* 0x0028 */ unsigned long Reserved[2];
} IMAGE_SEPARATE_DEBUG_HEADER, *PIMAGE_SEPARATE_DEBUG_HEADER; /* size: 0x0030 */

