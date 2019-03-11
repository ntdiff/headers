typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 Reserved : 4; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderArm64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _HEAP_LOCAL_DATA
{
  /* 0x0000 */ union _SLIST_HEADER DeletedSubSegments;
  /* 0x0010 */ struct _LFH_BLOCK_ZONE* volatile CrtZone;
  /* 0x0018 */ struct _LFH_HEAP* LowFragHeap;
  /* 0x0020 */ unsigned long Sequence;
  /* 0x0024 */ unsigned long DeleteRateThreshold;
  /* 0x0028 */ long __PADDING__[2];
} HEAP_LOCAL_DATA, *PHEAP_LOCAL_DATA; /* size: 0x0030 */

