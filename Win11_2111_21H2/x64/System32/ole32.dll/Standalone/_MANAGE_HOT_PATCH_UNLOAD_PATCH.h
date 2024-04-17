typedef struct _HOT_PATCH_IMAGE_INFO
{
  /* 0x0000 */ unsigned long CheckSum;
  /* 0x0004 */ unsigned long TimeDateStamp;
} HOT_PATCH_IMAGE_INFO, *PHOT_PATCH_IMAGE_INFO; /* size: 0x0008 */

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

typedef struct _MANAGE_HOT_PATCH_UNLOAD_PATCH
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ struct _HOT_PATCH_IMAGE_INFO BaseInfo;
  union
  {
    union
    {
      /* 0x000c */ struct _SID Sid;
      /* 0x000c */ unsigned char Buffer[68];
    }; /* size: 0x0044 */
  } /* size: 0x0044 */ UserSid;
} MANAGE_HOT_PATCH_UNLOAD_PATCH, *PMANAGE_HOT_PATCH_UNLOAD_PATCH; /* size: 0x0050 */

