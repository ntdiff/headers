typedef enum _STORAGE_RESERVE_ID
{
  StorageReserveIdNone = 0,
  StorageReserveIdHard = 1,
  StorageReserveIdSoft = 2,
  StorageReserveIdMax = 3,
} STORAGE_RESERVE_ID, *PSTORAGE_RESERVE_ID;

typedef struct _STORAGE_RESERVE_AREA_DEFINITION
{
  /* 0x0000 */ enum _STORAGE_RESERVE_ID Id;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ __int64 SpaceGuarantee;
} STORAGE_RESERVE_AREA_DEFINITION, *PSTORAGE_RESERVE_AREA_DEFINITION; /* size: 0x0010 */

typedef struct _DEFINE_STORAGE_RESERVE_INPUT
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long AreaDefinitionOffset;
  /* 0x000c */ unsigned long AreaDefinitionCount;
  /* 0x0010 */ struct _STORAGE_RESERVE_AREA_DEFINITION AreaDefinition[1];
} DEFINE_STORAGE_RESERVE_INPUT, *PDEFINE_STORAGE_RESERVE_INPUT; /* size: 0x0020 */

