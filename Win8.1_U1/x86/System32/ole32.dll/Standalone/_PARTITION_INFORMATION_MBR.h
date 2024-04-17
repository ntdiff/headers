typedef struct _PARTITION_INFORMATION_MBR
{
  /* 0x0000 */ unsigned char PartitionType;
  /* 0x0001 */ unsigned char BootIndicator;
  /* 0x0002 */ unsigned char RecognizedPartition;
  /* 0x0004 */ unsigned long HiddenSectors;
} PARTITION_INFORMATION_MBR, *PPARTITION_INFORMATION_MBR; /* size: 0x0008 */

