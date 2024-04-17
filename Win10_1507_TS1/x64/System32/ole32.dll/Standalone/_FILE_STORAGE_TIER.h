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
} FILE_STORAGE_TIER_MEDIA_TYPE, *PFILE_STORAGE_TIER_MEDIA_TYPE;

typedef struct _FILE_STORAGE_TIER
{
  /* 0x0000 */ struct _GUID Id;
  /* 0x0010 */ wchar_t Name[256];
  /* 0x0210 */ wchar_t Description[256];
  /* 0x0410 */ unsigned __int64 Flags;
  /* 0x0418 */ unsigned __int64 ProvisionedCapacity;
  /* 0x0420 */ enum _FILE_STORAGE_TIER_MEDIA_TYPE MediaType;
  /* 0x0424 */ long __PADDING__[1];
} FILE_STORAGE_TIER, *PFILE_STORAGE_TIER; /* size: 0x0428 */

