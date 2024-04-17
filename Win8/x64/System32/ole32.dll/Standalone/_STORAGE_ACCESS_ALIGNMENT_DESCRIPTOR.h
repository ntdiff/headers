typedef struct _STORAGE_ACCESS_ALIGNMENT_DESCRIPTOR
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned long BytesPerCacheLine;
  /* 0x000c */ unsigned long BytesOffsetForCacheAlignment;
  /* 0x0010 */ unsigned long BytesPerLogicalSector;
  /* 0x0014 */ unsigned long BytesPerPhysicalSector;
  /* 0x0018 */ unsigned long BytesOffsetForSectorAlignment;
} STORAGE_ACCESS_ALIGNMENT_DESCRIPTOR, *PSTORAGE_ACCESS_ALIGNMENT_DESCRIPTOR; /* size: 0x001c */

