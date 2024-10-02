typedef struct _MI_REVERSE_MAP_VIEW_ATTRIBUTES
{
  union
  {
    /* 0x0000 */ unsigned __int64 FullSectionOffset;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 NumberOfPtes : 6; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 PartitionId : 10; /* bit position: 6 */
      /* 0x0000 */ unsigned __int64 SectionOffset : 46; /* bit position: 16 */
      /* 0x0000 */ unsigned __int64 ViewState : 2; /* bit position: 62 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 EntireField;
  }; /* size: 0x0008 */
} MI_REVERSE_MAP_VIEW_ATTRIBUTES, *PMI_REVERSE_MAP_VIEW_ATTRIBUTES; /* size: 0x0008 */

