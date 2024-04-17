typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _SID_IDENTIFIER_AUTHORITY
{
  /* 0x0000 */ unsigned char Value[6];
} SID_IDENTIFIER_AUTHORITY, *PSID_IDENTIFIER_AUTHORITY; /* size: 0x0006 */

typedef struct _SID
{
  /* 0x0000 */ unsigned char Revision;
  /* 0x0001 */ unsigned char SubAuthorityCount;
  /* 0x0002 */ struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
  /* 0x0008 */ unsigned long SubAuthority[1];
} SID, *PSID; /* size: 0x000c */

typedef struct _HOT_PATCH_IMAGE_INFO
{
  /* 0x0000 */ unsigned long CheckSum;
  /* 0x0004 */ unsigned long TimeDateStamp;
} HOT_PATCH_IMAGE_INFO, *PHOT_PATCH_IMAGE_INFO; /* size: 0x0008 */

typedef struct _MANAGE_HOT_PATCH_LOAD_PATCH
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0008 */ struct _UNICODE_STRING PatchPath;
  union
  {
    union
    {
      /* 0x0018 */ struct _SID Sid;
      /* 0x0018 */ unsigned char Buffer[68];
    }; /* size: 0x0044 */
  } /* size: 0x0044 */ UserSid;
  /* 0x005c */ struct _HOT_PATCH_IMAGE_INFO BaseInfo;
  /* 0x0064 */ long __PADDING__[1];
} MANAGE_HOT_PATCH_LOAD_PATCH, *PMANAGE_HOT_PATCH_LOAD_PATCH; /* size: 0x0068 */

