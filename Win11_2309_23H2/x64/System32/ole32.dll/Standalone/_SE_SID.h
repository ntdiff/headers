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

typedef union _SE_SID
{
  union
  {
    /* 0x0000 */ struct _SID Sid;
    /* 0x0000 */ unsigned char Buffer[68];
  }; /* size: 0x0044 */
} SE_SID, *PSE_SID; /* size: 0x0044 */

