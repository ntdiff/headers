typedef struct _CM_INT13_DRIVE_PARAMETER
{
  /* 0x0000 */ unsigned short DriveSelect;
  /* 0x0002 */ unsigned long MaxCylinders;
  /* 0x0006 */ unsigned short SectorsPerTrack;
  /* 0x0008 */ unsigned short MaxHeads;
  /* 0x000a */ unsigned short NumberDrives;
} CM_INT13_DRIVE_PARAMETER, *PCM_INT13_DRIVE_PARAMETER; /* size: 0x000c */

