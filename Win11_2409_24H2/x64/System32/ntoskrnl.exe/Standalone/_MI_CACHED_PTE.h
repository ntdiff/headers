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

