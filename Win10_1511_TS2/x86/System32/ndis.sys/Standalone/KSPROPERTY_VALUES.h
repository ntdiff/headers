typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct KSIDENTIFIER
{
  union
  {
    struct
    {
      /* 0x0000 */ struct _GUID Set;
      /* 0x0010 */ unsigned long Id;
      /* 0x0014 */ unsigned long Flags;
    }; /* size: 0x0018 */
    struct
    {
      /* 0x0000 */ __int64 Alignment;
      /* 0x0008 */ long __PADDING__[4];
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
}; /* size: 0x0018 */

struct KSPROPERTY_VALUES
{
  /* 0x0000 */ struct KSIDENTIFIER PropTypeSet;
  /* 0x0018 */ unsigned long MembersListCount;
  /* 0x001c */ const struct KSPROPERTY_MEMBERSLIST* MembersList;
}; /* size: 0x0020 */

