typedef struct _MANAGE_HOT_PATCH_CREATE_PATCH_SECTION
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long DesiredAccess;
  /* 0x000c */ unsigned long PageProtection;
  /* 0x0010 */ unsigned long AllocationAttributes;
  /* 0x0018 */ void* BaseImageAddress;
  /* 0x0020 */ void* SectionHandle;
} MANAGE_HOT_PATCH_CREATE_PATCH_SECTION, *PMANAGE_HOT_PATCH_CREATE_PATCH_SECTION; /* size: 0x0028 */

