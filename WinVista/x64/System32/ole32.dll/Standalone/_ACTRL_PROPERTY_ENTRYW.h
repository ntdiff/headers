typedef struct _ACTRL_PROPERTY_ENTRYW
{
  /* 0x0000 */ wchar_t* lpProperty;
  /* 0x0008 */ struct _ACTRL_ACCESS_ENTRY_LISTW* pAccessEntryList;
  /* 0x0010 */ unsigned long fListFlags;
  /* 0x0014 */ long __PADDING__[1];
} ACTRL_PROPERTY_ENTRYW, *PACTRL_PROPERTY_ENTRYW; /* size: 0x0018 */

