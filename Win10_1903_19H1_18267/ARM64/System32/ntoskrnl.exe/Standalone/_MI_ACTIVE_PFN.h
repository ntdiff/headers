typedef struct _MI_ACTIVE_PFN
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Tradable : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 NonPagedBuddy : 43; /* bit position: 1 */
      }; /* bitfield */
    } /* size: 0x0008 */ Leaf;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Tradable : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 WsleAge : 3; /* bit position: 1 */
        /* 0x0000 */ unsigned __int64 OldestWsleLeafEntries : 10; /* bit position: 4 */
        /* 0x0000 */ unsigned __int64 OldestWsleLeafAge : 3; /* bit position: 14 */
        /* 0x0000 */ unsigned __int64 NonPagedBuddy : 43; /* bit position: 17 */
      }; /* bitfield */
    } /* size: 0x0008 */ PageTable;
    /* 0x0000 */ unsigned __int64 EntireActiveField;
  }; /* size: 0x0008 */
} MI_ACTIVE_PFN, *PMI_ACTIVE_PFN; /* size: 0x0008 */

