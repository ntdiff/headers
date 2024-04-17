typedef enum _DETECTION_TYPE
{
  DetectNone = 0,
  DetectInt13 = 1,
  DetectExInt13 = 2,
} DETECTION_TYPE, *PDETECTION_TYPE;

typedef struct _DISK_INT13_INFO
{
  /* 0x0000 */ unsigned short DriveSelect;
  /* 0x0004 */ unsigned long MaxCylinders;
  /* 0x0008 */ unsigned short SectorsPerTrack;
  /* 0x000a */ unsigned short MaxHeads;
  /* 0x000c */ unsigned short NumberDrives;
  /* 0x000e */ char __PADDING__[2];
} DISK_INT13_INFO, *PDISK_INT13_INFO; /* size: 0x0010 */

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

typedef struct _DISK_DETECTION_INFO
{
  /* 0x0000 */ unsigned long SizeOfDetectInfo;
  /* 0x0004 */ enum _DETECTION_TYPE DetectionType;
  /* 0x0008 */ struct _DISK_INT13_INFO Int13;
  /* 0x0018 */ struct _DISK_EX_INT13_INFO ExInt13;
} DISK_DETECTION_INFO, *PDISK_DETECTION_INFO; /* size: 0x0038 */

