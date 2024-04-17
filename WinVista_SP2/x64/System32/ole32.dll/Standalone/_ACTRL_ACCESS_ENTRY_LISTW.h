typedef struct _ACTRL_ACCESS_ENTRY_LISTW
{
  /* 0x0000 */ unsigned long cEntries;
  /* 0x0008 */ struct _ACTRL_ACCESS_ENTRYW* pAccessList;
} ACTRL_ACCESS_ENTRY_LISTW, *PACTRL_ACCESS_ENTRY_LISTW; /* size: 0x0010 */

