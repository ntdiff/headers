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

