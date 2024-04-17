typedef struct _DISK_INT13_INFO
{
  /* 0x0000 */ unsigned short DriveSelect;
  /* 0x0004 */ unsigned long MaxCylinders;
  /* 0x0008 */ unsigned short SectorsPerTrack;
  /* 0x000a */ unsigned short MaxHeads;
  /* 0x000c */ unsigned short NumberDrives;
  /* 0x000e */ char __PADDING__[2];
} DISK_INT13_INFO, *PDISK_INT13_INFO; /* size: 0x0010 */

