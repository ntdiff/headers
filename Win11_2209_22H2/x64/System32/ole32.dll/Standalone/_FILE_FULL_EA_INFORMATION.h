typedef struct _FILE_FULL_EA_INFORMATION
{
  /* 0x0000 */ unsigned long NextEntryOffset;
  /* 0x0004 */ unsigned char Flags;
  /* 0x0005 */ unsigned char EaNameLength;
  /* 0x0006 */ unsigned short EaValueLength;
  /* 0x0008 */ char EaName[1];
  /* 0x0009 */ char __PADDING__[3];
} FILE_FULL_EA_INFORMATION, *PFILE_FULL_EA_INFORMATION; /* size: 0x000c */

