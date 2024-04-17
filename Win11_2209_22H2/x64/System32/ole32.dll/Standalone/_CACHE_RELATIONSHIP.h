typedef enum _PROCESSOR_CACHE_TYPE
{
  CacheUnified = 0,
  CacheInstruction = 1,
  CacheData = 2,
  CacheTrace = 3,
} PROCESSOR_CACHE_TYPE, *PPROCESSOR_CACHE_TYPE;

typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned __int64 Mask;
  /* 0x0008 */ unsigned short Group;
  /* 0x000a */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x0010 */

typedef struct _CACHE_RELATIONSHIP
{
  /* 0x0000 */ unsigned char Level;
  /* 0x0001 */ unsigned char Associativity;
  /* 0x0002 */ unsigned short LineSize;
  /* 0x0004 */ unsigned long CacheSize;
  /* 0x0008 */ enum _PROCESSOR_CACHE_TYPE Type;
  /* 0x000c */ unsigned char Reserved[18];
  /* 0x001e */ unsigned short GroupCount;
  union
  {
    /* 0x0020 */ struct _GROUP_AFFINITY GroupMask;
    /* 0x0020 */ struct _GROUP_AFFINITY GroupMasks[1];
  }; /* size: 0x0010 */
} CACHE_RELATIONSHIP, *PCACHE_RELATIONSHIP; /* size: 0x0030 */

