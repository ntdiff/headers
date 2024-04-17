typedef struct _IMAGE_HOT_PATCH_BASE
{
  /* 0x0000 */ unsigned long SequenceNumber;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long OriginalTimeDateStamp;
  /* 0x000c */ unsigned long OriginalCheckSum;
  /* 0x0010 */ unsigned long CodeIntegrityInfo;
  /* 0x0014 */ unsigned long CodeIntegritySize;
  /* 0x0018 */ unsigned long PatchTable;
} IMAGE_HOT_PATCH_BASE, *PIMAGE_HOT_PATCH_BASE; /* size: 0x001c */

