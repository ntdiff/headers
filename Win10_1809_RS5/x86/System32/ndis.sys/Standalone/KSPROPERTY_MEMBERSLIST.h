struct KSPROPERTY_MEMBERSHEADER
{
  /* 0x0000 */ unsigned long MembersFlags;
  /* 0x0004 */ unsigned long MembersSize;
  /* 0x0008 */ unsigned long MembersCount;
  /* 0x000c */ unsigned long Flags;
}; /* size: 0x0010 */

struct KSPROPERTY_MEMBERSLIST
{
  /* 0x0000 */ struct KSPROPERTY_MEMBERSHEADER MembersHeader;
  /* 0x0010 */ const void* Members;
}; /* size: 0x0014 */

