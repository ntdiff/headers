typedef struct _ACTRL_PROPERTY_ENTRYW
{
  /* 0x0000 */ wchar_t* lpProperty;
  /* 0x0004 */ struct _ACTRL_ACCESS_ENTRY_LISTW* pAccessEntryList;
  /* 0x0008 */ unsigned long fListFlags;
} ACTRL_PROPERTY_ENTRYW, *PACTRL_PROPERTY_ENTRYW; /* size: 0x000c */

