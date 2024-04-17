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

typedef struct _KERNEL_STACK_SEGMENT
{
  /* 0x0000 */ unsigned __int64 StackBase;
  /* 0x0008 */ unsigned __int64 StackLimit;
  /* 0x0010 */ unsigned __int64 KernelStack;
  /* 0x0018 */ unsigned __int64 InitialStack;
  /* 0x0020 */ unsigned __int64 KernelShadowStackBase;
  /* 0x0028 */ union _KERNEL_SHADOW_STACK_LIMIT KernelShadowStackLimit;
  /* 0x0030 */ unsigned __int64 KernelShadowStack;
  /* 0x0038 */ unsigned __int64 KernelShadowStackInitial;
} KERNEL_STACK_SEGMENT, *PKERNEL_STACK_SEGMENT; /* size: 0x0040 */

