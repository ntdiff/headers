typedef union _MM_ETW_PAGE_EXTRA_INFO
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long SharedInitial : 1; /* bit position: 0 */
    } /* size: 0x0004 */ e1;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long WorkingSetType : 2; /* bit position: 0 */
        /* 0x0000 */ unsigned long NotAddedtoWS : 1; /* bit position: 2 */
        /* 0x0000 */ unsigned long COWFault : 1; /* bit position: 3 */
      }; /* bitfield */
    } /* size: 0x0004 */ e2;
    /* 0x0000 */ unsigned long ProtoPte;
    /* 0x0000 */ void* VirtualAddress;
  }; /* size: 0x0004 */
} MM_ETW_PAGE_EXTRA_INFO, *PMM_ETW_PAGE_EXTRA_INFO; /* size: 0x0004 */

