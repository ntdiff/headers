typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef enum _FILE_STORAGE_TIER_MEDIA_TYPE
{
  FileStorageTierMediaTypeUnspecified = 0,
  FileStorageTierMediaTypeDisk = 1,
  FileStorageTierMediaTypeSsd = 2,
  FileStorageTierMediaTypeScm = 4,
  FileStorageTierMediaTypeMax = 5,
} FILE_STORAGE_TIER_MEDIA_TYPE, *PFILE_STORAGE_TIER_MEDIA_TYPE;

typedef enum _FILE_STORAGE_TIER_CLASS
{
  FileStorageTierClassUnspecified = 0,
  FileStorageTierClassCapacity = 1,
  FileStorageTierClassPerformance = 2,
  FileStorageTierClassMax = 3,
} FILE_STORAGE_TIER_CLASS, *PFILE_STORAGE_TIER_CLASS;

typedef struct _FILE_STORAGE_TIER
{
  /* 0x0000 */ struct _GUID Id;
  /* 0x0010 */ wchar_t Name[256];
  /* 0x0210 */ wchar_t Description[256];
  /* 0x0410 */ unsigned __int64 Flags;
  /* 0x0418 */ unsigned __int64 ProvisionedCapacity;
  /* 0x0420 */ enum _FILE_STORAGE_TIER_MEDIA_TYPE MediaType;
  /* 0x0424 */ enum _FILE_STORAGE_TIER_CLASS Class;
} FILE_STORAGE_TIER, *PFILE_STORAGE_TIER; /* size: 0x0428 */

typedef struct _FSCTL_QUERY_STORAGE_CLASSES_OUTPUT
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long TotalNumberOfTiers;
  /* 0x0010 */ unsigned long NumberOfTiersReturned;
  /* 0x0018 */ struct _FILE_STORAGE_TIER Tiers[1];
} FSCTL_QUERY_STORAGE_CLASSES_OUTPUT, *PFSCTL_QUERY_STORAGE_CLASSES_OUTPUT; /* size: 0x0440 */

