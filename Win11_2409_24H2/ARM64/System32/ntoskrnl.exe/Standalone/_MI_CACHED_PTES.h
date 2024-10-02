typedef struct _MI_CACHED_PTE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 GlobalTimeStamp : 16; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 PteIndex : 48; /* bit position: 16 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Long;
  }; /* size: 0x0008 */
} MI_CACHED_PTE, *PMI_CACHED_PTE; /* size: 0x0008 */

typedef struct _MI_CACHED_PTES
{
  /* 0x0000 */ volatile struct _MI_CACHED_PTE Bins[8];
  /* 0x0040 */ volatile __int64 CachedPteCount;
} MI_CACHED_PTES, *PMI_CACHED_PTES; /* size: 0x0048 */

