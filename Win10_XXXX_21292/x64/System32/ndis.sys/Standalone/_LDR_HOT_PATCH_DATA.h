typedef struct _LDR_HOT_PATCH_DATA
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0008 */ void* PatchLoadLibrary /* function */;
  /* 0x0010 */ void* PatchGetProcAddress /* function */;
} LDR_HOT_PATCH_DATA, *PLDR_HOT_PATCH_DATA; /* size: 0x0018 */

