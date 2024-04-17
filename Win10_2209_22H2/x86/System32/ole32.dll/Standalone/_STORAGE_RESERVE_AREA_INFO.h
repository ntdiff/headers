typedef enum _STORAGE_RESERVE_ID
{
  StorageReserveIdNone = 0,
  StorageReserveIdHard = 1,
  StorageReserveIdSoft = 2,
  StorageReserveIdUpdateScratch = 3,
  StorageReserveIdMax = 4,
} STORAGE_RESERVE_ID, *PSTORAGE_RESERVE_ID;

typedef struct _STORAGE_RESERVE_AREA_INFO
{
  /* 0x0000 */ enum _STORAGE_RESERVE_ID Id;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ __int64 SpaceGuarantee;
  /* 0x0010 */ __int64 SpaceUsed;
} STORAGE_RESERVE_AREA_INFO, *PSTORAGE_RESERVE_AREA_INFO; /* size: 0x0018 */

