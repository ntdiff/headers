typedef struct _MANAGE_HOT_PATCH_QUERY_ACTIVE_PATCHES
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ void* ProcessHandle;
  /* 0x0008 */ unsigned long PatchCount;
  /* 0x000c */ struct _UNICODE_STRING* PatchPathStrings;
  /* 0x0010 */ struct _HOT_PATCH_IMAGE_INFO* BaseInfos;
} MANAGE_HOT_PATCH_QUERY_ACTIVE_PATCHES, *PMANAGE_HOT_PATCH_QUERY_ACTIVE_PATCHES; /* size: 0x0014 */

