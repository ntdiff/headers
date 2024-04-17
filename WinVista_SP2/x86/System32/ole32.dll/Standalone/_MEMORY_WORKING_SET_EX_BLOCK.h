typedef struct _MEMORY_WORKING_SET_EX_BLOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Valid : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long ShareCount : 3; /* bit position: 1 */
      /* 0x0000 */ unsigned long Win32Protection : 11; /* bit position: 4 */
      /* 0x0000 */ unsigned long Shared : 1; /* bit position: 15 */
      /* 0x0000 */ unsigned long Node : 6; /* bit position: 16 */
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 22 */
      /* 0x0000 */ unsigned long LargePage : 1; /* bit position: 23 */
      /* 0x0000 */ unsigned long Priority : 3; /* bit position: 24 */
      /* 0x0000 */ unsigned long Reserved : 5; /* bit position: 27 */
    }; /* bitfield */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long Valid : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned long Reserved0 : 14; /* bit position: 1 */
        /* 0x0000 */ unsigned long Shared : 1; /* bit position: 15 */
        /* 0x0000 */ unsigned long Reserved1 : 6; /* bit position: 16 */
        /* 0x0000 */ unsigned long Location : 2; /* bit position: 22 */
        /* 0x0000 */ unsigned long Reserved2 : 8; /* bit position: 24 */
      }; /* bitfield */
    } /* size: 0x0004 */ Invalid;
  }; /* size: 0x0004 */
} MEMORY_WORKING_SET_EX_BLOCK, *PMEMORY_WORKING_SET_EX_BLOCK; /* size: 0x0004 */

