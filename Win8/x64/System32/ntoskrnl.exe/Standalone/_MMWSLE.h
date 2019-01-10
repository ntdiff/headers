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
    /* 0x0000 */ unsigned __int64 VirtualPageNumber : 52; /* bit position: 12 */
  }; /* bitfield */
} MMWSLENTRY, *PMMWSLENTRY; /* size: 0x0008 */

typedef struct _MMWSLE_FREE_ENTRY
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 MustBeZero : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 PreviousFree : 31; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 NextFree : 32; /* bit position: 32 */
  }; /* bitfield */
} MMWSLE_FREE_ENTRY, *PMMWSLE_FREE_ENTRY; /* size: 0x0008 */

typedef struct _MMWSLE
{
  union
  {
    union
    {
      /* 0x0000 */ void* VirtualAddress;
      /* 0x0000 */ unsigned __int64 Long;
      /* 0x0000 */ struct _MMWSLENTRY e1;
      /* 0x0000 */ struct _MMWSLE_FREE_ENTRY e2;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
} MMWSLE, *PMMWSLE; /* size: 0x0008 */

