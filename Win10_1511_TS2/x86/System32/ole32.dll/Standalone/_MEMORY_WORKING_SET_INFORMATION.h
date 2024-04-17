typedef struct _MEMORY_WORKING_SET_BLOCK
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Protection : 5; /* bit position: 0 */
    /* 0x0000 */ unsigned long ShareCount : 3; /* bit position: 5 */
    /* 0x0000 */ unsigned long Shared : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned long Node : 3; /* bit position: 9 */
    /* 0x0000 */ unsigned long VirtualPage : 20; /* bit position: 12 */
  }; /* bitfield */
} MEMORY_WORKING_SET_BLOCK, *PMEMORY_WORKING_SET_BLOCK; /* size: 0x0004 */

typedef struct _MEMORY_WORKING_SET_INFORMATION
{
  /* 0x0000 */ unsigned long NumberOfEntries;
  /* 0x0004 */ struct _MEMORY_WORKING_SET_BLOCK WorkingSetInfo[1];
} MEMORY_WORKING_SET_INFORMATION, *PMEMORY_WORKING_SET_INFORMATION; /* size: 0x0008 */

