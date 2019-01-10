typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _VACB
{
  /* 0x0000 */ void* BaseAddress;
  /* 0x0008 */ struct _SHARED_CACHE_MAP* SharedCacheMap;
  union
  {
    union
    {
      /* 0x0010 */ union _LARGE_INTEGER FileOffset;
      /* 0x0010 */ unsigned short ActiveCount;
      /* 0x0010 */ struct _LIST_ENTRY Links;
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ Overlay;
  /* 0x0020 */ struct _VACB_ARRAY_HEADER* ArrayHead;
} VACB, *PVACB; /* size: 0x0028 */

