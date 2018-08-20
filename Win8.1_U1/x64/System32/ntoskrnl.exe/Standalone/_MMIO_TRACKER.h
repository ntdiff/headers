typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _IO_CACHE_INFO
{
  /* 0x0000 */ unsigned char CacheAttribute;
} IO_CACHE_INFO, *PIO_CACHE_INFO; /* size: 0x0001 */

typedef struct _MMIO_TRACKER
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ unsigned __int64 PageFrameIndex;
  /* 0x0018 */ unsigned __int64 NumberOfPages;
  union
  {
    /* 0x0020 */ void* BaseVa;
    /* 0x0020 */ unsigned long CacheFlushTimeStamp;
  }; /* size: 0x0008 */
  /* 0x0028 */ struct _MDL* Mdl;
  /* 0x0030 */ unsigned __int64 MdlPages;
  /* 0x0038 */ void* StackTrace[6];
  /* 0x0068 */ struct _IO_CACHE_INFO CacheInfo[1];
  /* 0x0069 */ char __PADDING__[7];
} MMIO_TRACKER, *PMMIO_TRACKER; /* size: 0x0070 */

