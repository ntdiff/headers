typedef struct _IMAGE_RESOURCE_DIRECTORY
{
  /* 0x0000 */ unsigned long Characteristics;
  /* 0x0004 */ unsigned long TimeDateStamp;
  /* 0x0008 */ unsigned short MajorVersion;
  /* 0x000a */ unsigned short MinorVersion;
  /* 0x000c */ unsigned short NumberOfNamedEntries;
  /* 0x000e */ unsigned short NumberOfIdEntries;
} IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY; /* size: 0x0010 */

