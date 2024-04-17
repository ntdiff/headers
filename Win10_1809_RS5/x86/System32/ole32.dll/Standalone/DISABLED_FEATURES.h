typedef union _RTL_RUN_ONCE
{
  union
  {
    /* 0x0000 */ void* Ptr;
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ unsigned long State : 2; /* bit position: 0 */
  }; /* size: 0x0004 */
} RTL_RUN_ONCE, *PRTL_RUN_ONCE; /* size: 0x0004 */

class DISABLED_FEATURES
{
  union
  {
    /* 0x0000 */ int s_fDisableAll;
    /* 0x0000 */ int s_fDisableTypelibs;
    /* 0x0000 */ int s_fDisableDispatch;
    /* 0x0000 */ int s_fDisableAllForOle32;
    /* 0x0000 */ int s_fDisableDispatchForOle32;
    /* 0x0000 */ union _RTL_RUN_ONCE s_InitOnce;
  }; /* size: 0x0004 */
}; /* size: 0x0001 */

