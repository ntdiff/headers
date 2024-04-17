typedef struct _SID_AND_ATTRIBUTES
{
  /* 0x0000 */ void* Sid;
  /* 0x0008 */ unsigned long Attributes;
  /* 0x000c */ long __PADDING__[1];
} SID_AND_ATTRIBUTES, *PSID_AND_ATTRIBUTES; /* size: 0x0010 */

typedef struct _TOKEN_USER
{
  /* 0x0000 */ struct _SID_AND_ATTRIBUTES User;
} TOKEN_USER, *PTOKEN_USER; /* size: 0x0010 */

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

typedef struct _SE_TOKEN_USER
{
  union
  {
    /* 0x0000 */ struct _TOKEN_USER TokenUser;
    /* 0x0000 */ struct _SID_AND_ATTRIBUTES User;
  }; /* size: 0x0010 */
  union
  {
    /* 0x0010 */ struct _SID Sid;
    /* 0x0010 */ unsigned char Buffer[68];
  }; /* size: 0x0044 */
  /* 0x0054 */ long __PADDING__[1];
} SE_TOKEN_USER, *PSE_TOKEN_USER; /* size: 0x0058 */

