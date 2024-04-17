typedef struct _MANAGE_HOT_PATCH_QUERY_ACTIVE_PATCHES
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0008 */ void* ProcessHandle;
  /* 0x0010 */ unsigned long PatchCount;
  /* 0x0018 */ struct _UNICODE_STRING* PatchPathStrings;
  /* 0x0020 */ struct _HOT_PATCH_IMAGE_INFO* BaseInfos;
  /* 0x0028 */ unsigned long* PatchSequenceNumbers;
} MANAGE_HOT_PATCH_QUERY_ACTIVE_PATCHES, *PMANAGE_HOT_PATCH_QUERY_ACTIVE_PATCHES; /* size: 0x0030 */

