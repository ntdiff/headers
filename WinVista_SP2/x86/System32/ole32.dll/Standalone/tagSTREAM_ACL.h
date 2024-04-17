struct tagSTREAM_ACL
{
  /* 0x0000 */ unsigned long ulNumOfDenyEntries;
  /* 0x0004 */ unsigned long ulNumOfGrantEntries;
  /* 0x0008 */ struct tagSTREAM_ACE* pACL;
}; /* size: 0x000c */

