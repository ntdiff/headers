typedef struct _HOT_PATCH_IMAGE_INFO
{
  /* 0x0000 */ unsigned long CheckSum;
  /* 0x0004 */ unsigned long TimeDateStamp;
} HOT_PATCH_IMAGE_INFO, *PHOT_PATCH_IMAGE_INFO; /* size: 0x0008 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _MANAGE_HOT_PATCH_QUERY_SINGLE_PATCH
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0008 */ void* ProcessHandle;
  /* 0x0010 */ struct _HOT_PATCH_IMAGE_INFO BaseInfo;
  /* 0x0018 */ unsigned long Flags;
  /* 0x0020 */ struct _UNICODE_STRING PatchPathString;
} MANAGE_HOT_PATCH_QUERY_SINGLE_PATCH, *PMANAGE_HOT_PATCH_QUERY_SINGLE_PATCH; /* size: 0x0030 */

