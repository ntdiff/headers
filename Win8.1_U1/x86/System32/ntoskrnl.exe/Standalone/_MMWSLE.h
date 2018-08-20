typedef struct _MMWSLENTRY
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long Spare : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long Hashed : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long Direct : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long Protection : 5; /* bit position: 4 */
    /* 0x0000 */ unsigned long Age : 3; /* bit position: 9 */
    /* 0x0000 */ unsigned long VirtualPageNumber : 20; /* bit position: 12 */
  }; /* bitfield */
} MMWSLENTRY, *PMMWSLENTRY; /* size: 0x0004 */

typedef struct _MMWSLE_FREE_ENTRY
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long MustBeZero : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long PreviousFree : 11; /* bit position: 1 */
    /* 0x0000 */ unsigned long NextFree : 20; /* bit position: 12 */
  }; /* bitfield */
} MMWSLE_FREE_ENTRY, *PMMWSLE_FREE_ENTRY; /* size: 0x0004 */

typedef struct _MMWSLE
{
  union // _TAG_UNNAMED_93
  {
    union
    {
      /* 0x0000 */ void* VirtualAddress;
      /* 0x0000 */ unsigned long Long;
      /* 0x0000 */ struct _MMWSLENTRY e1;
      /* 0x0000 */ struct _MMWSLE_FREE_ENTRY e2;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
} MMWSLE, *PMMWSLE; /* size: 0x0004 */

