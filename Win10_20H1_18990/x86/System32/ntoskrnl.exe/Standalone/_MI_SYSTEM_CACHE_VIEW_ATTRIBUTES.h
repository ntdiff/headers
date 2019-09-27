typedef struct _MI_SYSTEM_CACHE_VIEW_ATTRIBUTES
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 NumberOfPtes : 6; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 PartitionId : 10; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 SectionOffset : 48; /* bit position: 16 */
  }; /* bitfield */
} MI_SYSTEM_CACHE_VIEW_ATTRIBUTES, *PMI_SYSTEM_CACHE_VIEW_ATTRIBUTES; /* size: 0x0008 */

