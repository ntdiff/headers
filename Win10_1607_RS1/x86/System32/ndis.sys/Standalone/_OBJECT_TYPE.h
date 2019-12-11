typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

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
  NonPagedPoolExecute = 0,
  PagedPool = 1,
  NonPagedPoolMustSucceed = 2,
  DontUseThisType = 3,
  NonPagedPoolCacheAligned = 4,
  PagedPoolCacheAligned = 5,
  NonPagedPoolCacheAlignedMustS = 6,
  MaxPoolType = 7,
  NonPagedPoolBase = 0,
  NonPagedPoolBaseMustSucceed = 2,
  NonPagedPoolBaseCacheAligned = 4,
  NonPagedPoolBaseCacheAlignedMustS = 6,
  NonPagedPoolSession = 32,
  PagedPoolSession = 33,
  NonPagedPoolMustSucceedSession = 34,
  DontUseThisTypeSession = 35,
  NonPagedPoolCacheAlignedSession = 36,
  PagedPoolCacheAlignedSession = 37,
  NonPagedPoolCacheAlignedMustSSession = 38,
  NonPagedPoolNx = 512,
  NonPagedPoolNxCacheAligned = 516,
  NonPagedPoolSessionNx = 544,
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
      /* 0x0002 */ unsigned char SupportsObjectCallbacks : 1; /* bit position: 6 */
      /* 0x0002 */ unsigned char CacheAligned : 1; /* bit position: 7 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  union
  {
    /* 0x0003 */ unsigned char ObjectTypeFlags2;
    struct /* bitfield */
    {
      /* 0x0003 */ unsigned char UseExtendedParameters : 1; /* bit position: 0 */
      /* 0x0003 */ unsigned char Reserved : 7; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0004 */ unsigned long ObjectTypeCode;
  /* 0x0008 */ unsigned long InvalidAttributes;
  /* 0x000c */ struct _GENERIC_MAPPING GenericMapping;
  /* 0x001c */ unsigned long ValidAccessMask;
  /* 0x0020 */ unsigned long RetainAccess;
  /* 0x0024 */ enum _POOL_TYPE PoolType;
  /* 0x0028 */ unsigned long DefaultPagedPoolCharge;
  /* 0x002c */ unsigned long DefaultNonPagedPoolCharge;
  /* 0x0030 */ void* DumpProcedure /* function */;
  /* 0x0034 */ void* OpenProcedure /* function */;
  /* 0x0038 */ void* CloseProcedure /* function */;
  /* 0x003c */ void* DeleteProcedure /* function */;
  union
  {
    /* 0x0040 */ void* ParseProcedure /* function */;
    /* 0x0040 */ void* ParseProcedureEx /* function */;
  }; /* size: 0x0004 */
  /* 0x0044 */ void* SecurityProcedure /* function */;
  /* 0x0048 */ void* QueryNameProcedure /* function */;
  /* 0x004c */ void* OkayToCloseProcedure /* function */;
  /* 0x0050 */ unsigned long WaitObjectFlagMask;
  /* 0x0054 */ unsigned short WaitObjectFlagOffset;
  /* 0x0056 */ unsigned short WaitObjectPointerOffset;
} OBJECT_TYPE_INITIALIZER, *POBJECT_TYPE_INITIALIZER; /* size: 0x0058 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

typedef struct _OBJECT_TYPE
{
  /* 0x0000 */ struct _LIST_ENTRY TypeList;
  /* 0x0008 */ struct _UNICODE_STRING Name;
  /* 0x0010 */ void* DefaultObject;
  /* 0x0014 */ unsigned char Index;
  /* 0x0018 */ unsigned long TotalNumberOfObjects;
  /* 0x001c */ unsigned long TotalNumberOfHandles;
  /* 0x0020 */ unsigned long HighWaterNumberOfObjects;
  /* 0x0024 */ unsigned long HighWaterNumberOfHandles;
  /* 0x0028 */ struct _OBJECT_TYPE_INITIALIZER TypeInfo;
  /* 0x0080 */ struct _EX_PUSH_LOCK TypeLock;
  /* 0x0084 */ unsigned long Key;
  /* 0x0088 */ struct _LIST_ENTRY CallbackList;
} OBJECT_TYPE, *POBJECT_TYPE; /* size: 0x0090 */

