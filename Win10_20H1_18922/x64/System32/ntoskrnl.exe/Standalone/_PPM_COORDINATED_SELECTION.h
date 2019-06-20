typedef struct _PPM_COORDINATED_SELECTION
{
  /* 0x0000 */ unsigned long MaximumStates;
  /* 0x0004 */ unsigned long SelectedStates;
  /* 0x0008 */ unsigned long DefaultSelection;
  /* 0x0010 */ unsigned long* Selection;
} PPM_COORDINATED_SELECTION, *PPPM_COORDINATED_SELECTION; /* size: 0x0018 */

