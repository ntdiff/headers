typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _IO_CACHE_INFO
{
  /* 0x0000 */ unsigned char CacheAttribute;
} IO_CACHE_INFO, *PIO_CACHE_INFO; /* size: 0x0001 */

typedef struct _MMIO_TRACKER
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0008 */ unsigned long PageFrameIndex;
  /* 0x000c */ unsigned long NumberOfPages;
  union
  {
    /* 0x0010 */ void* BaseVa;
    /* 0x0010 */ unsigned long CacheFlushTimeStamp;
  }; /* size: 0x0004 */
  /* 0x0014 */ struct _MDL* Mdl;
  /* 0x0018 */ unsigned long MdlPages;
  /* 0x001c */ void* StackTrace[6];
  /* 0x0034 */ struct _IO_CACHE_INFO CacheInfo[1];
  /* 0x0035 */ char __PADDING__[3];
} MMIO_TRACKER, *PMMIO_TRACKER; /* size: 0x0038 */

