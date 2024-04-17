typedef struct _IMAGE_HOT_PATCH_INFO
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned long SequenceNumber;
  /* 0x000c */ unsigned long BaseImageList;
  /* 0x0010 */ unsigned long BaseImageCount;
  /* 0x0014 */ unsigned long BufferOffset;
} IMAGE_HOT_PATCH_INFO, *PIMAGE_HOT_PATCH_INFO; /* size: 0x0018 */

