typedef struct _IMAGE_DEBUG_DIRECTORY
{
  /* 0x0000 */ unsigned long Characteristics;
  /* 0x0004 */ unsigned long TimeDateStamp;
  /* 0x0008 */ unsigned short MajorVersion;
  /* 0x000a */ unsigned short MinorVersion;
  /* 0x000c */ unsigned long Type;
  /* 0x0010 */ unsigned long SizeOfData;
  /* 0x0014 */ unsigned long AddressOfRawData;
  /* 0x0018 */ unsigned long PointerToRawData;
} IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY; /* size: 0x001c */

