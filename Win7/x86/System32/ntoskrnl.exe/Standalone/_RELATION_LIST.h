typedef struct _RELATION_LIST
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ unsigned long TagCount;
  /* 0x0008 */ unsigned long FirstLevel;
  /* 0x000c */ unsigned long MaxLevel;
  /* 0x0010 */ struct _RELATION_LIST_ENTRY* Entries[1];
} RELATION_LIST, *PRELATION_LIST; /* size: 0x0014 */

