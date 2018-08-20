typedef struct _GENERIC_MAPPING
{
  /* 0x0000 */ unsigned long GenericRead;
  /* 0x0004 */ unsigned long GenericWrite;
  /* 0x0008 */ unsigned long GenericExecute;
  /* 0x000c */ unsigned long GenericAll;
} GENERIC_MAPPING, *PGENERIC_MAPPING; /* size: 0x0010 */

typedef enum _POOL_TYPE
{
  NonPagedPool = 0,
  PagedPool = 1,
  NonPagedPoolMustSucceed = 2,
  DontUseThisType = 3,
  NonPagedPoolCacheAligned = 4,
  PagedPoolCacheAligned = 5,
  NonPagedPoolCacheAlignedMustS = 6,
  MaxPoolType = 7,
  NonPagedPoolSession = 32,
  PagedPoolSession = 33,
  NonPagedPoolMustSucceedSession = 34,
  DontUseThisTypeSession = 35,
  NonPagedPoolCacheAlignedSession = 36,
  PagedPoolCacheAlignedSession = 37,
  NonPagedPoolCacheAlignedMustSSession = 38,
} POOL_TYPE, *PPOOL_TYPE;

typedef struct _OBJECT_TYPE_INITIALIZER
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned char UseDefaultObject;
  /* 0x0003 */ unsigned char CaseInsensitive;
  /* 0x0004 */ unsigned long InvalidAttributes;
  /* 0x0008 */ struct _GENERIC_MAPPING GenericMapping;
  /* 0x0018 */ unsigned long ValidAccessMask;
  /* 0x001c */ unsigned char SecurityRequired;
  /* 0x001d */ unsigned char MaintainHandleCount;
  /* 0x001e */ unsigned char MaintainTypeList;
  /* 0x0020 */ enum _POOL_TYPE PoolType;
  /* 0x0024 */ unsigned long DefaultPagedPoolCharge;
  /* 0x0028 */ unsigned long DefaultNonPagedPoolCharge;
  /* 0x002c */ void* DumpProcedure /* function */;
  /* 0x0030 */ void* OpenProcedure /* function */;
  /* 0x0034 */ void* CloseProcedure /* function */;
  /* 0x0038 */ void* DeleteProcedure /* function */;
  /* 0x003c */ void* ParseProcedure /* function */;
  /* 0x0040 */ void* SecurityProcedure /* function */;
  /* 0x0044 */ void* QueryNameProcedure /* function */;
  /* 0x0048 */ void* OkayToCloseProcedure /* function */;
} OBJECT_TYPE_INITIALIZER, *POBJECT_TYPE_INITIALIZER; /* size: 0x004c */

