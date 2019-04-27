typedef struct _PPM_SELECTION_MENU_ENTRY
{
  /* 0x0000 */ unsigned char StrictDependency;
  /* 0x0001 */ unsigned char InitiatingState;
  /* 0x0002 */ unsigned char DependentState;
  /* 0x0004 */ unsigned long StateIndex;
  /* 0x0008 */ unsigned long Dependencies;
  /* 0x0010 */ struct _PPM_SELECTION_DEPENDENCY* DependencyList;
} PPM_SELECTION_MENU_ENTRY, *PPPM_SELECTION_MENU_ENTRY; /* size: 0x0018 */

