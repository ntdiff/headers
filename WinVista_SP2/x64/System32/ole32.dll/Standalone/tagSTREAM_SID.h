struct tagSSID_IDENTIFIER_AUTHORITY
{
  /* 0x0000 */ unsigned char Value[6];
}; /* size: 0x0006 */

struct tagSTREAM_SID
{
  /* 0x0000 */ unsigned char Revision;
  /* 0x0001 */ unsigned char SubAuthorityCount;
  /* 0x0002 */ struct tagSSID_IDENTIFIER_AUTHORITY IdentifierAuthority;
  /* 0x0008 */ unsigned long SubAuthority[1];
}; /* size: 0x000c */

