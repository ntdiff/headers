typedef struct _HOT_PATCH_BASE_PATCH_INFORMATION
{
  /* 0x0000 */ unsigned long BaseCheckSum;
  /* 0x0004 */ unsigned long BaseTimeDateStamp;
  /* 0x0008 */ unsigned long BaseHpatEntriesUsed;
  /* 0x000c */ unsigned long PatchCheckSum;
  /* 0x0010 */ unsigned long PatchTimeDateStamp;
  /* 0x0014 */ unsigned long PatchHpatEntriesUsed;
  /* 0x0018 */ unsigned long PatchSequenceNumber;
} HOT_PATCH_BASE_PATCH_INFORMATION, *PHOT_PATCH_BASE_PATCH_INFORMATION; /* size: 0x001c */

