typedef union _KERNEL_SHADOW_STACK_LIMIT
{
  union
  {
    /* 0x0000 */ unsigned __int64 AllFields;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 ShadowStackType : 3; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Unused : 9; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 ShadowStackLimitPfn : 52; /* bit position: 12 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} KERNEL_SHADOW_STACK_LIMIT, *PKERNEL_SHADOW_STACK_LIMIT; /* size: 0x0008 */

