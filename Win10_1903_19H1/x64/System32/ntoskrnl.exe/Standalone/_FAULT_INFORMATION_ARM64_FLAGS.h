typedef struct _FAULT_INFORMATION_ARM64_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long WriteNotRead : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long InstructionNotData : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long Privileged : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long FaultAddressValid : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long Reserved : 28; /* bit position: 4 */
  }; /* bitfield */
} FAULT_INFORMATION_ARM64_FLAGS, *PFAULT_INFORMATION_ARM64_FLAGS; /* size: 0x0004 */

