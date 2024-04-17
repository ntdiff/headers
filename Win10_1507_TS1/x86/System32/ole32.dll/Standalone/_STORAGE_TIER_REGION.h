typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _STORAGE_TIER_REGION
{
  /* 0x0000 */ struct _GUID TierId;
  /* 0x0010 */ unsigned __int64 Offset;
  /* 0x0018 */ unsigned __int64 Length;
} STORAGE_TIER_REGION, *PSTORAGE_TIER_REGION; /* size: 0x0020 */

