typedef union _RTL_THREAD_RNG_STATE
{
  union
  {
    /* 0x0000 */ unsigned __int64 State64[2];
    /* 0x0000 */ unsigned long State32[4];
  }; /* size: 0x0010 */
} RTL_THREAD_RNG_STATE, *PRTL_THREAD_RNG_STATE; /* size: 0x0010 */

