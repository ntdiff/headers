typedef struct _DISK_EX_INT13_INFO
{
  /* 0x0000 */ unsigned short ExBufferSize;
  /* 0x0002 */ unsigned short ExFlags;
  /* 0x0004 */ unsigned long ExCylinders;
  /* 0x0008 */ unsigned long ExHeads;
  /* 0x000c */ unsigned long ExSectorsPerTrack;
  /* 0x0010 */ unsigned __int64 ExSectorsPerDrive;
  /* 0x0018 */ unsigned short ExSectorSize;
  /* 0x001a */ unsigned short ExReserved;
  /* 0x001c */ long __PADDING__[1];
} DISK_EX_INT13_INFO, *PDISK_EX_INT13_INFO; /* size: 0x0020 */

