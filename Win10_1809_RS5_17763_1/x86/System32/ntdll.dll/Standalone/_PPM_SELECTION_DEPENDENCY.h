typedef struct _PPM_SELECTION_MENU
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ struct _PPM_SELECTION_MENU_ENTRY* Entries;
} PPM_SELECTION_MENU, *PPPM_SELECTION_MENU; /* size: 0x0008 */

typedef struct _PPM_SELECTION_DEPENDENCY
{
  /* 0x0000 */ unsigned long Processor;
  /* 0x0004 */ struct _PPM_SELECTION_MENU Menu;
} PPM_SELECTION_DEPENDENCY, *PPPM_SELECTION_DEPENDENCY; /* size: 0x000c */

