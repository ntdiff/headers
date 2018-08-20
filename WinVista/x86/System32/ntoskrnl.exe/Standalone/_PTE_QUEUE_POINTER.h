typedef union _PTE_QUEUE_POINTER
{
  union
  {
    struct
    {
      /* 0x0000 */ long PointerPte;
      /* 0x0004 */ long TimeStamp;
    }; /* size: 0x0008 */
    /* 0x0000 */ __int64 Data;
  }; /* size: 0x0008 */
} PTE_QUEUE_POINTER, *PPTE_QUEUE_POINTER; /* size: 0x0008 */

