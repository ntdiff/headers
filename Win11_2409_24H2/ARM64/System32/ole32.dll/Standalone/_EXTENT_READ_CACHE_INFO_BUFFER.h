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

typedef struct _EXTENT_READ_CACHE_INFO_BUFFER
{
  /* 0x0000 */ union _LARGE_INTEGER AllocatedCache;
  /* 0x0008 */ union _LARGE_INTEGER PopulatedCache;
  /* 0x0010 */ union _LARGE_INTEGER InErrorCache;
} EXTENT_READ_CACHE_INFO_BUFFER, *PEXTENT_READ_CACHE_INFO_BUFFER; /* size: 0x0018 */

