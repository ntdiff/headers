typedef struct _MMWSLENTRY
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Spare : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Hashed : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 Direct : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Age : 3; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 VirtualPageNumber : 36; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 HighActiveFlink : 4; /* bit position: 48 */
    /* 0x0000 */ unsigned __int64 HighActiveBlink : 4; /* bit position: 52 */
    /* 0x0000 */ unsigned __int64 Unused : 8; /* bit position: 56 */
  }; /* bitfield */
} MMWSLENTRY, *PMMWSLENTRY; /* size: 0x0008 */

