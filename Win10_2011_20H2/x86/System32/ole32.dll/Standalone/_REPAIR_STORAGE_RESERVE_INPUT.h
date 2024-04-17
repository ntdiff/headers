typedef enum _STORAGE_RESERVE_ID
{
  StorageReserveIdNone = 0,
  StorageReserveIdHard = 1,
  StorageReserveIdSoft = 2,
  StorageReserveIdUpdateScratch = 3,
  StorageReserveIdMax = 4,
} STORAGE_RESERVE_ID, *PSTORAGE_RESERVE_ID;

typedef struct _REPAIR_STORAGE_RESERVE_INPUT
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long AreaIdOffset;
  /* 0x000c */ unsigned long AreaIdCount;
  /* 0x0010 */ enum _STORAGE_RESERVE_ID AreaId[1];
} REPAIR_STORAGE_RESERVE_INPUT, *PREPAIR_STORAGE_RESERVE_INPUT; /* size: 0x0014 */

