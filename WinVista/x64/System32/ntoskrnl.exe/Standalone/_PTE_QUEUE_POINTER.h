typedef union _PTE_QUEUE_POINTER
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ __int64 PointerPte : 48; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 TimeStamp : 16; /* bit position: 48 */
    }; /* bitfield */
    /* 0x0000 */ __int64 Data;
  }; /* size: 0x0008 */
} PTE_QUEUE_POINTER, *PPTE_QUEUE_POINTER; /* size: 0x0008 */

