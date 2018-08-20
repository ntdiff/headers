typedef struct _MMWSLE_FREE_ENTRY
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 MustBeZero : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 PreviousFree : 31; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 NextFree : 32; /* bit position: 32 */
  }; /* bitfield */
} MMWSLE_FREE_ENTRY, *PMMWSLE_FREE_ENTRY; /* size: 0x0008 */

