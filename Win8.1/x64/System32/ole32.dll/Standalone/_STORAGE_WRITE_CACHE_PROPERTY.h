typedef enum _WRITE_CACHE_TYPE
{
  WriteCacheTypeUnknown = 0,
  WriteCacheTypeNone = 1,
  WriteCacheTypeWriteBack = 2,
  WriteCacheTypeWriteThrough = 3,
} WRITE_CACHE_TYPE, *PWRITE_CACHE_TYPE;

typedef enum _WRITE_CACHE_ENABLE
{
  WriteCacheEnableUnknown = 0,
  WriteCacheDisabled = 1,
  WriteCacheEnabled = 2,
} WRITE_CACHE_ENABLE, *PWRITE_CACHE_ENABLE;

typedef enum _WRITE_CACHE_CHANGE
{
  WriteCacheChangeUnknown = 0,
  WriteCacheNotChangeable = 1,
  WriteCacheChangeable = 2,
} WRITE_CACHE_CHANGE, *PWRITE_CACHE_CHANGE;

typedef enum _WRITE_THROUGH
{
  WriteThroughUnknown = 0,
  WriteThroughNotSupported = 1,
  WriteThroughSupported = 2,
} WRITE_THROUGH, *PWRITE_THROUGH;

typedef struct _STORAGE_WRITE_CACHE_PROPERTY
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ enum _WRITE_CACHE_TYPE WriteCacheType;
  /* 0x000c */ enum _WRITE_CACHE_ENABLE WriteCacheEnabled;
  /* 0x0010 */ enum _WRITE_CACHE_CHANGE WriteCacheChangeable;
  /* 0x0014 */ enum _WRITE_THROUGH WriteThroughSupported;
  /* 0x0018 */ unsigned char FlushCacheSupported;
  /* 0x0019 */ unsigned char UserDefinedPowerProtection;
  /* 0x001a */ unsigned char NVCacheEnabled;
  /* 0x001b */ char __PADDING__[1];
} STORAGE_WRITE_CACHE_PROPERTY, *PSTORAGE_WRITE_CACHE_PROPERTY; /* size: 0x001c */

