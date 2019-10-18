typedef struct _MI_STORE_INPAGE_COMPLETE_FLAGS
{
  union
  {
    /* 0x0000 */ unsigned long EntireFlags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long StoreFault : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long LowResourceFailure : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Spare : 14; /* bit position: 2 */
      /* 0x0000 */ unsigned long RemainingPageCount : 16; /* bit position: 16 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} MI_STORE_INPAGE_COMPLETE_FLAGS, *PMI_STORE_INPAGE_COMPLETE_FLAGS; /* size: 0x0004 */

typedef struct _MI_HARD_FAULT_STATE
{
  /* 0x0000 */ struct _MMPFN* SwapPfn;
  /* 0x0004 */ struct _MI_STORE_INPAGE_COMPLETE_FLAGS StoreFlags;
} MI_HARD_FAULT_STATE, *PMI_HARD_FAULT_STATE; /* size: 0x0008 */

