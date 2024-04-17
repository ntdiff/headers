enum DISK_CACHE_RETENTION_PRIORITY
{
  EqualPriority = 0,
  KeepPrefetchedData = 1,
  KeepReadData = 2,
};

typedef struct _DISK_CACHE_INFORMATION
{
  /* 0x0000 */ unsigned char ParametersSavable;
  /* 0x0001 */ unsigned char ReadCacheEnabled;
  /* 0x0002 */ unsigned char WriteCacheEnabled;
  /* 0x0004 */ enum DISK_CACHE_RETENTION_PRIORITY ReadRetentionPriority;
  /* 0x0008 */ enum DISK_CACHE_RETENTION_PRIORITY WriteRetentionPriority;
  /* 0x000c */ unsigned short DisablePrefetchTransferLength;
  /* 0x000e */ unsigned char PrefetchScalar;
  union
  {
    struct
    {
      /* 0x0010 */ unsigned short Minimum;
      /* 0x0012 */ unsigned short Maximum;
      /* 0x0014 */ unsigned short MaximumBlocks;
    } /* size: 0x0006 */ ScalarPrefetch;
    struct
    {
      struct
      {
        /* 0x0010 */ unsigned short Minimum;
        /* 0x0012 */ unsigned short Maximum;
      } /* size: 0x0004 */ BlockPrefetch;
      /* 0x0014 */ long __PADDING__[1];
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} DISK_CACHE_INFORMATION, *PDISK_CACHE_INFORMATION; /* size: 0x0018 */

