enum XLAT_SIDE
{
  XLAT_SERVER = 1,
  XLAT_CLIENT = 2,
};

typedef struct _FULL_PTR_XLAT_TABLES
{
  /* 0x0000 */ void* RefIdToPointer;
  /* 0x0008 */ void* PointerToRefId;
  /* 0x0010 */ unsigned long NextRefId;
  /* 0x0014 */ enum XLAT_SIDE XlatSide;
} FULL_PTR_XLAT_TABLES, *PFULL_PTR_XLAT_TABLES; /* size: 0x0018 */

