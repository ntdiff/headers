typedef enum _FILE_STORAGE_TIER_CLASS
{
  FileStorageTierClassUnspecified = 0,
  FileStorageTierClassCapacity = 1,
  FileStorageTierClassPerformance = 2,
  FileStorageTierClassMax = 3,
} FILE_STORAGE_TIER_CLASS, *PFILE_STORAGE_TIER_CLASS;

typedef struct _FILE_DESIRED_STORAGE_CLASS_INFORMATION
{
  /* 0x0000 */ enum _FILE_STORAGE_TIER_CLASS Class;
  /* 0x0004 */ unsigned long Flags;
} FILE_DESIRED_STORAGE_CLASS_INFORMATION, *PFILE_DESIRED_STORAGE_CLASS_INFORMATION; /* size: 0x0008 */

