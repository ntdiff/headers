typedef enum _PARTITION_STYLE
{
  PARTITION_STYLE_MBR = 0,
  PARTITION_STYLE_GPT = 1,
  PARTITION_STYLE_RAW = 2,
} PARTITION_STYLE, *PPARTITION_STYLE;

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

typedef struct _PARTITION_INFORMATION_GPT
{
  /* 0x0000 */ struct _GUID PartitionType;
  /* 0x0010 */ struct _GUID PartitionId;
  /* 0x0020 */ unsigned __int64 Attributes;
  /* 0x0028 */ wchar_t Name[36];
} PARTITION_INFORMATION_GPT, *PPARTITION_INFORMATION_GPT; /* size: 0x0070 */

typedef struct _PARTITION_INFORMATION_EX
{
  /* 0x0000 */ enum _PARTITION_STYLE PartitionStyle;
  /* 0x0008 */ union _LARGE_INTEGER StartingOffset;
  /* 0x0010 */ union _LARGE_INTEGER PartitionLength;
  /* 0x0018 */ unsigned long PartitionNumber;
  /* 0x001c */ unsigned char RewritePartition;
  union
  {
    /* 0x0020 */ struct _PARTITION_INFORMATION_MBR Mbr;
    /* 0x0020 */ struct _PARTITION_INFORMATION_GPT Gpt;
  }; /* size: 0x0070 */
} PARTITION_INFORMATION_EX, *PPARTITION_INFORMATION_EX; /* size: 0x0090 */

