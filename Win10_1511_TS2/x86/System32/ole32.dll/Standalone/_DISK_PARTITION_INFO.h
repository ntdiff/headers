typedef enum _PARTITION_STYLE
{
  PARTITION_STYLE_MBR = 0,
  PARTITION_STYLE_GPT = 1,
  PARTITION_STYLE_RAW = 2,
} PARTITION_STYLE, *PPARTITION_STYLE;

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _DISK_PARTITION_INFO
{
  /* 0x0000 */ unsigned long SizeOfPartitionInfo;
  /* 0x0004 */ enum _PARTITION_STYLE PartitionStyle;
  union
  {
    struct
    {
      /* 0x0008 */ unsigned long Signature;
      /* 0x000c */ unsigned long CheckSum;
    } /* size: 0x0008 */ Mbr;
    struct
    {
      /* 0x0008 */ struct _GUID DiskId;
    } /* size: 0x0010 */ Gpt;
  }; /* size: 0x0010 */
} DISK_PARTITION_INFO, *PDISK_PARTITION_INFO; /* size: 0x0018 */

