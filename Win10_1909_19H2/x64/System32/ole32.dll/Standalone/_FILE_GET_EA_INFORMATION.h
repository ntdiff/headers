typedef struct _FILE_GET_EA_INFORMATION
{
  /* 0x0000 */ unsigned long NextEntryOffset;
  /* 0x0004 */ unsigned char EaNameLength;
  /* 0x0005 */ char EaName[1];
  /* 0x0006 */ char __PADDING__[2];
} FILE_GET_EA_INFORMATION, *PFILE_GET_EA_INFORMATION; /* size: 0x0008 */

