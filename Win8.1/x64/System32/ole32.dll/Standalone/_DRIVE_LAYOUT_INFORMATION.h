typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _PARTITION_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER StartingOffset;
  /* 0x0008 */ union _LARGE_INTEGER PartitionLength;
  /* 0x0010 */ unsigned long HiddenSectors;
  /* 0x0014 */ unsigned long PartitionNumber;
  /* 0x0018 */ unsigned char PartitionType;
  /* 0x0019 */ unsigned char BootIndicator;
  /* 0x001a */ unsigned char RecognizedPartition;
  /* 0x001b */ unsigned char RewritePartition;
  /* 0x001c */ long __PADDING__[1];
} PARTITION_INFORMATION, *PPARTITION_INFORMATION; /* size: 0x0020 */

typedef struct _DRIVE_LAYOUT_INFORMATION
{
  /* 0x0000 */ unsigned long PartitionCount;
  /* 0x0004 */ unsigned long Signature;
  /* 0x0008 */ struct _PARTITION_INFORMATION PartitionEntry[1];
} DRIVE_LAYOUT_INFORMATION, *PDRIVE_LAYOUT_INFORMATION; /* size: 0x0028 */

