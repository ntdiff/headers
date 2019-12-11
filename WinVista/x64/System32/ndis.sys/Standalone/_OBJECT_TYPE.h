typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _OWNER_ENTRY
{
  /* 0x0000 */ unsigned __int64 OwnerThread;
  union
  {
    /* 0x0008 */ long OwnerCount;
    /* 0x0008 */ unsigned long TableSize;
  }; /* size: 0x0004 */
  /* 0x000c */ long __PADDING__[1];
} OWNER_ENTRY, *POWNER_ENTRY; /* size: 0x0010 */

typedef struct _ERESOURCE
{
  /* 0x0000 */ struct _LIST_ENTRY SystemResourcesList;
  /* 0x0010 */ struct _OWNER_ENTRY* OwnerTable;
  /* 0x0018 */ short ActiveCount;
  /* 0x001a */ unsigned short Flag;
  /* 0x0020 */ struct _KSEMAPHORE* SharedWaiters;
  /* 0x0028 */ struct _KEVENT* ExclusiveWaiters;
  /* 0x0030 */ struct _OWNER_ENTRY OwnerEntry;
  /* 0x0040 */ unsigned long ActiveEntries;
  /* 0x0044 */ unsigned long ContentionCount;
  /* 0x0048 */ unsigned long NumberOfSharedWaiters;
  /* 0x004c */ unsigned long NumberOfExclusiveWaiters;
  /* 0x0050 */ void* Reserved2;
  union
  {
    /* 0x0058 */ void* Address;
    /* 0x0058 */ unsigned __int64 CreatorBackTraceIndex;
  }; /* size: 0x0008 */
  /* 0x0060 */ unsigned __int64 SpinLock;
} ERESOURCE, *PERESOURCE; /* size: 0x0068 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

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

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

typedef struct _OBJECT_TYPE
{
  /* 0x0000 */ struct _ERESOURCE Mutex;
  /* 0x0068 */ struct _LIST_ENTRY TypeList;
  /* 0x0078 */ struct _UNICODE_STRING Name;
  /* 0x0088 */ void* DefaultObject;
  /* 0x0090 */ unsigned long Index;
  /* 0x0094 */ unsigned long TotalNumberOfObjects;
  /* 0x0098 */ unsigned long TotalNumberOfHandles;
  /* 0x009c */ unsigned long HighWaterNumberOfObjects;
  /* 0x00a0 */ unsigned long HighWaterNumberOfHandles;
  /* 0x00a8 */ struct _OBJECT_TYPE_INITIALIZER TypeInfo;
  /* 0x0118 */ unsigned long Key;
  /* 0x0120 */ struct _EX_PUSH_LOCK ObjectLocks[32];
} OBJECT_TYPE, *POBJECT_TYPE; /* size: 0x0220 */

