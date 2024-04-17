typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _PARTITION_INFORMATION_MBR
{
  /* 0x0000 */ unsigned char PartitionType;
  /* 0x0001 */ unsigned char BootIndicator;
  /* 0x0002 */ unsigned char RecognizedPartition;
  /* 0x0004 */ unsigned long HiddenSectors;
  /* 0x0008 */ struct _GUID PartitionId;
} PARTITION_INFORMATION_MBR, *PPARTITION_INFORMATION_MBR; /* size: 0x0018 */

