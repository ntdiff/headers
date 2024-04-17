typedef struct _RTL_CONDITION_VARIABLE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long WakeCount : 3; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} RTL_CONDITION_VARIABLE, *PRTL_CONDITION_VARIABLE; /* size: 0x0004 */

class COleConditionVariable
{
  /* 0x0000 */ struct _RTL_CONDITION_VARIABLE _cv;
}; /* size: 0x0004 */

