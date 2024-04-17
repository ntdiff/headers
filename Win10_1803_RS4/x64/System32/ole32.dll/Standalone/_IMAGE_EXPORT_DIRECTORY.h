typedef struct _IMAGE_EXPORT_DIRECTORY
{
  /* 0x0000 */ unsigned long Characteristics;
  /* 0x0004 */ unsigned long TimeDateStamp;
  /* 0x0008 */ unsigned short MajorVersion;
  /* 0x000a */ unsigned short MinorVersion;
  /* 0x000c */ unsigned long Name;
  /* 0x0010 */ unsigned long Base;
  /* 0x0014 */ unsigned long NumberOfFunctions;
  /* 0x0018 */ unsigned long NumberOfNames;
  /* 0x001c */ unsigned long AddressOfFunctions;
  /* 0x0020 */ unsigned long AddressOfNames;
  /* 0x0024 */ unsigned long AddressOfNameOrdinals;
} IMAGE_EXPORT_DIRECTORY, *PIMAGE_EXPORT_DIRECTORY; /* size: 0x0028 */

