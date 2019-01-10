typedef union _MM_PAGE_ACCESS_INFO_FLAGS
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long FilePointerIndex : 9; /* bit position: 0 */
        /* 0x0000 */ unsigned long HardFault : 1; /* bit position: 9 */
        /* 0x0000 */ unsigned long Image : 1; /* bit position: 10 */
        /* 0x0000 */ unsigned long Spare0 : 1; /* bit position: 11 */
      }; /* bitfield */
    } /* size: 0x0004 */ File;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long FilePointerIndex : 9; /* bit position: 0 */
        /* 0x0000 */ unsigned long HardFault : 1; /* bit position: 9 */
        /* 0x0000 */ unsigned long Spare1 : 2; /* bit position: 10 */
      }; /* bitfield */
    } /* size: 0x0004 */ Private;
  }; /* size: 0x0004 */
} MM_PAGE_ACCESS_INFO_FLAGS, *PMM_PAGE_ACCESS_INFO_FLAGS; /* size: 0x0004 */

