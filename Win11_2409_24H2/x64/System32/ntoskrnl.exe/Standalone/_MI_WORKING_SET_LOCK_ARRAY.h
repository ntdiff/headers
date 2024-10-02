typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _MI_CACHE_LINE
{
  union
  {
    struct
    {
      /* 0x0000 */ void* UniqueCacheLine[8];
    } /* size: 0x0040 */ u1;
    struct
    {
      struct
      {
        /* 0x0000 */ struct _LIST_ENTRY Links;
        /* 0x0010 */ volatile unsigned long Signaled;
        /* 0x0014 */ long __PADDING__[1];
      } /* size: 0x0018 */ u2;
      /* 0x0018 */ long __PADDING__[10];
    }; /* size: 0x0040 */
  }; /* size: 0x0040 */
} MI_CACHE_LINE, *PMI_CACHE_LINE; /* size: 0x0040 */

typedef struct _MI_WORKING_SET_LOCK_ARRAY
{
  union
  {
    /* 0x0000 */ volatile long Lock;
    /* 0x0000 */ struct _MI_CACHE_LINE CacheLinePadding;
  }; /* size: 0x0040 */
} MI_WORKING_SET_LOCK_ARRAY, *PMI_WORKING_SET_LOCK_ARRAY; /* size: 0x0040 */

