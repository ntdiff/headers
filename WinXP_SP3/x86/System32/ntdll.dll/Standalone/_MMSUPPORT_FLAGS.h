typedef struct _MMSUPPORT_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned int SessionSpace : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned int BeingTrimmed : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned int SessionLeader : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned int TrimHard : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned int WorkingSetHard : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned int AddressSpaceBeingDeleted : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned int Available : 10; /* bit position: 6 */
    /* 0x0000 */ unsigned int AllowWorkingSetAdjustment : 8; /* bit position: 16 */
    /* 0x0000 */ unsigned int MemoryPriority : 8; /* bit position: 24 */
  }; /* bitfield */
} MMSUPPORT_FLAGS, *PMMSUPPORT_FLAGS; /* size: 0x0004 */

