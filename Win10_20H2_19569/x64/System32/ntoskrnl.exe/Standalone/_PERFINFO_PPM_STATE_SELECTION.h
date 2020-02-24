typedef struct _PERFINFO_PPM_STATE_SELECTION
{
  /* 0x0000 */ unsigned long SelectedState;
  /* 0x0004 */ unsigned long VetoedStates;
  /* 0x0008 */ unsigned long VetoReason[1];
} PERFINFO_PPM_STATE_SELECTION, *PPERFINFO_PPM_STATE_SELECTION; /* size: 0x000c */

