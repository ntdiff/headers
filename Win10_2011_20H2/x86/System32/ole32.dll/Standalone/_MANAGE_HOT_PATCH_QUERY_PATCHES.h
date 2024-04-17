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

typedef struct _MANAGE_HOT_PATCH_QUERY_PATCHES
{
  /* 0x0000 */ unsigned long Version;
  union
  {
    union
    {
      /* 0x0004 */ struct _SID Sid;
      /* 0x0004 */ unsigned char Buffer[68];
    }; /* size: 0x0044 */
  } /* size: 0x0044 */ UserSid;
  /* 0x0048 */ unsigned long PatchCount;
  /* 0x004c */ struct _UNICODE_STRING* PatchPathStrings;
  /* 0x0050 */ struct _HOT_PATCH_IMAGE_INFO* BaseInfos;
} MANAGE_HOT_PATCH_QUERY_PATCHES, *PMANAGE_HOT_PATCH_QUERY_PATCHES; /* size: 0x0054 */

