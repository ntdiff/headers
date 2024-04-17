typedef struct _IMAGE_RESOURCE_DATA_ENTRY
{
  /* 0x0000 */ unsigned long OffsetToData;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned long CodePage;
  /* 0x000c */ unsigned long Reserved;
} IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY; /* size: 0x0010 */

