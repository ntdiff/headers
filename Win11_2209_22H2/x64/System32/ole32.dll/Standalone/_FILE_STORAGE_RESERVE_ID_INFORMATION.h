typedef enum _STORAGE_RESERVE_ID
{
  StorageReserveIdNone = 0,
  StorageReserveIdHard = 1,
  StorageReserveIdSoft = 2,
  StorageReserveIdUpdateScratch = 3,
  StorageReserveIdMax = 4,
} STORAGE_RESERVE_ID, *PSTORAGE_RESERVE_ID;

typedef struct _FILE_STORAGE_RESERVE_ID_INFORMATION
{
  /* 0x0000 */ enum _STORAGE_RESERVE_ID StorageReserveId;
} FILE_STORAGE_RESERVE_ID_INFORMATION, *PFILE_STORAGE_RESERVE_ID_INFORMATION; /* size: 0x0004 */

