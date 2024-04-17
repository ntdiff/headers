typedef enum _LOGICAL_PROCESSOR_RELATIONSHIP
{
  RelationProcessorCore = 0,
  RelationNumaNode = 1,
  RelationCache = 2,
  RelationProcessorPackage = 3,
} LOGICAL_PROCESSOR_RELATIONSHIP, *PLOGICAL_PROCESSOR_RELATIONSHIP;

typedef enum _PROCESSOR_CACHE_TYPE
{
  CacheUnified = 0,
  CacheInstruction = 1,
  CacheData = 2,
  CacheTrace = 3,
} PROCESSOR_CACHE_TYPE, *PPROCESSOR_CACHE_TYPE;

typedef struct _CACHE_DESCRIPTOR
{
  /* 0x0000 */ unsigned char Level;
  /* 0x0001 */ unsigned char Associativity;
  /* 0x0002 */ unsigned short LineSize;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ enum _PROCESSOR_CACHE_TYPE Type;
} CACHE_DESCRIPTOR, *PCACHE_DESCRIPTOR; /* size: 0x000c */

typedef struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION
{
  /* 0x0000 */ unsigned long ProcessorMask;
  /* 0x0004 */ enum _LOGICAL_PROCESSOR_RELATIONSHIP Relationship;
  union
  {
    struct
    {
      /* 0x0008 */ unsigned char Flags;
    } /* size: 0x0001 */ ProcessorCore;
    struct
    {
      /* 0x0008 */ unsigned long NodeNumber;
    } /* size: 0x0004 */ NumaNode;
    /* 0x0008 */ struct _CACHE_DESCRIPTOR Cache;
    /* 0x0008 */ unsigned __int64 Reserved[2];
  }; /* size: 0x0010 */
} SYSTEM_LOGICAL_PROCESSOR_INFORMATION, *PSYSTEM_LOGICAL_PROCESSOR_INFORMATION; /* size: 0x0018 */

