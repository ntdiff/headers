typedef struct _MMPFNENTRY
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char PageLocation : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned char WriteInProgress : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char Modified : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char ReadInProgress : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char CacheAttribute : 2; /* bit position: 6 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0001 */ unsigned char Priority : 3; /* bit position: 0 */
    /* 0x0001 */ unsigned char Rom : 1; /* bit position: 3 */
    /* 0x0001 */ unsigned char InPageError : 1; /* bit position: 4 */
    /* 0x0001 */ unsigned char KernelStack : 1; /* bit position: 5 */
    /* 0x0001 */ unsigned char RemovalRequested : 1; /* bit position: 6 */
    /* 0x0001 */ unsigned char ParityError : 1; /* bit position: 7 */
  }; /* bitfield */
} MMPFNENTRY, *PMMPFNENTRY; /* size: 0x0002 */

