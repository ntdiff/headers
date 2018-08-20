typedef struct _MMWSLENTRY
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 LockedInWs : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 LockedInMemory : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 Hashed : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 Direct : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Age : 2; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 VirtualPageNumber : 52; /* bit position: 12 */
  }; /* bitfield */
} MMWSLENTRY, *PMMWSLENTRY; /* size: 0x0008 */

