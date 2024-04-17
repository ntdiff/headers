typedef enum _STORAGE_RESERVE_ID
{
  StorageReserveIdNone = 0,
  StorageReserveIdHard = 1,
  StorageReserveIdSoft = 2,
  StorageReserveIdUpdateScratch = 3,
  StorageReserveIdMax = 4,
} STORAGE_RESERVE_ID, *PSTORAGE_RESERVE_ID;

typedef struct _FILE_QUERY_STORAGE_RESERVE_ID_INFORMATION_EX
{
  /* 0x0000 */ enum _STORAGE_RESERVE_ID StorageReserveId;
  /* 0x0008 */ __int64 SpaceUsed;
} FILE_QUERY_STORAGE_RESERVE_ID_INFORMATION_EX, *PFILE_QUERY_STORAGE_RESERVE_ID_INFORMATION_EX; /* size: 0x0010 */

