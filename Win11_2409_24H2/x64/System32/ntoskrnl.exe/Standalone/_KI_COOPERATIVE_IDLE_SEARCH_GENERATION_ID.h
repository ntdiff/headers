typedef union _KI_COOPERATIVE_IDLE_SEARCH_GENERATION_ID
{
  union
  {
    /* 0x0000 */ unsigned __int64 FullId;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Empty : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 MinorId : 6; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 MajorId : 57; /* bit position: 7 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} KI_COOPERATIVE_IDLE_SEARCH_GENERATION_ID, *PKI_COOPERATIVE_IDLE_SEARCH_GENERATION_ID; /* size: 0x0008 */

