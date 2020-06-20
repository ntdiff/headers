typedef union _KLOCK_ENTRY_BOOST_BITMAP
{
  union
  {
    /* 0x0000 */ unsigned __int64 AllFields;
    struct
    {
      /* 0x0000 */ unsigned long AllBoosts : 32; /* bit position: 0 */
      /* 0x0004 */ unsigned long Reserved : 32; /* bit position: 0 */
    }; /* size: 0x0008 */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long CpuBoostsBitmap : 30; /* bit position: 0 */
        /* 0x0000 */ unsigned long IoBoost : 1; /* bit position: 30 */
        /* 0x0000 */ unsigned long IoQoSBoost : 1; /* bit position: 31 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0004 */ unsigned long IoNormalPriorityWaiterCount : 8; /* bit position: 0 */
        /* 0x0004 */ unsigned long IoQoSWaiterCount : 7; /* bit position: 8 */
      }; /* bitfield */
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} KLOCK_ENTRY_BOOST_BITMAP, *PKLOCK_ENTRY_BOOST_BITMAP; /* size: 0x0008 */

