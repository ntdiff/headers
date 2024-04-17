typedef struct _ATOM_TABLE_INFORMATION
{
  /* 0x0000 */ unsigned long NumberOfAtoms;
  /* 0x0004 */ unsigned short Atoms[1];
  /* 0x0006 */ char __PADDING__[2];
} ATOM_TABLE_INFORMATION, *PATOM_TABLE_INFORMATION; /* size: 0x0008 */

