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
  union
  {
    /* 0x0002 */ unsigned char ObjectTypeFlags;
    struct /* bitfield */
    {
      /* 0x0002 */ unsigned char CaseInsensitive : 1; /* bit position: 0 */
      /* 0x0002 */ unsigned char UnnamedObjectsOnly : 1; /* bit position: 1 */
      /* 0x0002 */ unsigned char UseDefaultObject : 1; /* bit position: 2 */
      /* 0x0002 */ unsigned char SecurityRequired : 1; /* bit position: 3 */
      /* 0x0002 */ unsigned char MaintainHandleCount : 1; /* bit position: 4 */
      /* 0x0002 */ unsigned char MaintainTypeList : 1; /* bit position: 5 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0004 */ unsigned long ObjectTypeCode;
  /* 0x0008 */ unsigned long InvalidAttributes;
  /* 0x000c */ struct _GENERIC_MAPPING GenericMapping;
  /* 0x001c */ unsigned long ValidAccessMask;
  /* 0x0020 */ enum _POOL_TYPE PoolType;
  /* 0x0024 */ unsigned long DefaultPagedPoolCharge;
  /* 0x0028 */ unsigned long DefaultNonPagedPoolCharge;
  /* 0x0030 */ void* DumpProcedure /* function */;
  /* 0x0038 */ void* OpenProcedure /* function */;
  /* 0x0040 */ void* CloseProcedure /* function */;
  /* 0x0048 */ void* DeleteProcedure /* function */;
  /* 0x0050 */ void* ParseProcedure /* function */;
  /* 0x0058 */ void* SecurityProcedure /* function */;
  /* 0x0060 */ void* QueryNameProcedure /* function */;
  /* 0x0068 */ void* OkayToCloseProcedure /* function */;
} OBJECT_TYPE_INITIALIZER, *POBJECT_TYPE_INITIALIZER; /* size: 0x0070 */

