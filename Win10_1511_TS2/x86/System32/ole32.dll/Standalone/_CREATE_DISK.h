typedef enum _PARTITION_STYLE
{
  PARTITION_STYLE_MBR = 0,
  PARTITION_STYLE_GPT = 1,
  PARTITION_STYLE_RAW = 2,
} PARTITION_STYLE, *PPARTITION_STYLE;

typedef struct _CREATE_DISK_MBR
{
  /* 0x0000 */ unsigned long Signature;
} CREATE_DISK_MBR, *PCREATE_DISK_MBR; /* size: 0x0004 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _CREATE_DISK_GPT
{
  /* 0x0000 */ struct _GUID DiskId;
  /* 0x0010 */ unsigned long MaxPartitionCount;
} CREATE_DISK_GPT, *PCREATE_DISK_GPT; /* size: 0x0014 */

typedef struct _CREATE_DISK
{
  /* 0x0000 */ enum _PARTITION_STYLE PartitionStyle;
  union
  {
    /* 0x0004 */ struct _CREATE_DISK_MBR Mbr;
    /* 0x0004 */ struct _CREATE_DISK_GPT Gpt;
  }; /* size: 0x0014 */
} CREATE_DISK, *PCREATE_DISK; /* size: 0x0018 */

