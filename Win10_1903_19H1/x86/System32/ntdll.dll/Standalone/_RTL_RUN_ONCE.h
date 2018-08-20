typedef union _RTL_RUN_ONCE
{
  union
  {
    /* 0x0000 */ void* Ptr;
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ unsigned long State : 2; /* bit position: 0 */
  }; /* size: 0x0004 */
} RTL_RUN_ONCE, *PRTL_RUN_ONCE; /* size: 0x0004 */

