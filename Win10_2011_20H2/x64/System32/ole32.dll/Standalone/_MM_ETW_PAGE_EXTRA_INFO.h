typedef union _MM_ETW_PAGE_EXTRA_INFO
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 SharedInitial : 1; /* bit position: 0 */
    } /* size: 0x0008 */ e1;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 WorkingSetType : 2; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 NotAddedtoWS : 1; /* bit position: 2 */
        /* 0x0000 */ unsigned __int64 COWFault : 1; /* bit position: 3 */
      }; /* bitfield */
    } /* size: 0x0008 */ e2;
    /* 0x0000 */ unsigned __int64 ProtoPte;
    /* 0x0000 */ void* VirtualAddress;
  }; /* size: 0x0008 */
} MM_ETW_PAGE_EXTRA_INFO, *PMM_ETW_PAGE_EXTRA_INFO; /* size: 0x0008 */

