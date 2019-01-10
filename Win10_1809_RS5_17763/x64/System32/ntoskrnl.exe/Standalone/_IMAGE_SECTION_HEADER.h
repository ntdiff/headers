typedef struct _IMAGE_SECTION_HEADER
{
  /* 0x0000 */ unsigned char Name[8];
  union
  {
    union
    {
      /* 0x0008 */ unsigned long PhysicalAddress;
      /* 0x0008 */ unsigned long VirtualSize;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Misc;
  /* 0x000c */ unsigned long VirtualAddress;
  /* 0x0010 */ unsigned long SizeOfRawData;
  /* 0x0014 */ unsigned long PointerToRawData;
  /* 0x0018 */ unsigned long PointerToRelocations;
  /* 0x001c */ unsigned long PointerToLinenumbers;
  /* 0x0020 */ unsigned short NumberOfRelocations;
  /* 0x0022 */ unsigned short NumberOfLinenumbers;
  /* 0x0024 */ unsigned long Characteristics;
} IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER; /* size: 0x0028 */

