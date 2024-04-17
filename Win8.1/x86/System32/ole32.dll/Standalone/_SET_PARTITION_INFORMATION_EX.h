typedef enum _PARTITION_STYLE
{
  PARTITION_STYLE_MBR = 0,
  PARTITION_STYLE_GPT = 1,
  PARTITION_STYLE_RAW = 2,
} PARTITION_STYLE, *PPARTITION_STYLE;

typedef struct _SET_PARTITION_INFORMATION
{
  /* 0x0000 */ unsigned char PartitionType;
} SET_PARTITION_INFORMATION, *PSET_PARTITION_INFORMATION; /* size: 0x0001 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _PARTITION_INFORMATION_GPT
{
  /* 0x0000 */ struct _GUID PartitionType;
  /* 0x0010 */ struct _GUID PartitionId;
  /* 0x0020 */ unsigned __int64 Attributes;
  /* 0x0028 */ wchar_t Name[36];
} PARTITION_INFORMATION_GPT, *PPARTITION_INFORMATION_GPT; /* size: 0x0070 */

typedef struct _SET_PARTITION_INFORMATION_EX
{
  /* 0x0000 */ enum _PARTITION_STYLE PartitionStyle;
  union
  {
    /* 0x0008 */ struct _SET_PARTITION_INFORMATION Mbr;
    /* 0x0008 */ struct _PARTITION_INFORMATION_GPT Gpt;
  }; /* size: 0x0070 */
} SET_PARTITION_INFORMATION_EX, *PSET_PARTITION_INFORMATION_EX; /* size: 0x0078 */

