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

