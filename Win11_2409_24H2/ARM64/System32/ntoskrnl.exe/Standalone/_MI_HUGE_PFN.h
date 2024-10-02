typedef struct _MI_HUGE_PFN
{
  union
  {
    union
    {
      struct
      {
        /* 0x0000 */ unsigned __int64 EntireField;
      } /* size: 0x0008 */ e1;
      struct
      {
        struct /* bitfield */
        {
          /* 0x0000 */ unsigned __int64 PageState : 3; /* bit position: 0 */
          /* 0x0000 */ unsigned __int64 HasError : 1; /* bit position: 3 */
          /* 0x0000 */ unsigned __int64 Partition : 11; /* bit position: 4 */
          /* 0x0000 */ unsigned __int64 ZeroedDuringStateChanges : 49; /* bit position: 15 */
        }; /* bitfield */
      } /* size: 0x0008 */ e2;
      struct
      {
        struct /* bitfield */
        {
          /* 0x0000 */ unsigned __int64 PageState : 3; /* bit position: 0 */
          /* 0x0000 */ unsigned __int64 HasError : 1; /* bit position: 3 */
          /* 0x0000 */ unsigned __int64 Partition : 11; /* bit position: 4 */
          /* 0x0000 */ unsigned __int64 Flink : 18; /* bit position: 15 */
          /* 0x0000 */ unsigned __int64 Blink : 18; /* bit position: 33 */
          /* 0x0000 */ unsigned __int64 WriteInProgress : 1; /* bit position: 51 */
        }; /* bitfield */
      } /* size: 0x0008 */ OnList;
      struct
      {
        struct /* bitfield */
        {
          /* 0x0000 */ unsigned __int64 PageState : 3; /* bit position: 0 */
          /* 0x0000 */ unsigned __int64 HasError : 1; /* bit position: 3 */
          /* 0x0000 */ unsigned __int64 Partition : 11; /* bit position: 4 */
          /* 0x0000 */ unsigned __int64 DeleteBit : 1; /* bit position: 15 */
          /* 0x0000 */ unsigned __int64 ContentsWereNonZeroWhenInitiallyUnlinked : 1; /* bit position: 16 */
          /* 0x0000 */ unsigned __int64 ShareCount : 18; /* bit position: 17 */
        }; /* bitfield */
      } /* size: 0x0008 */ Active;
      struct
      {
        struct /* bitfield */
        {
          /* 0x0000 */ unsigned __int64 PageState : 3; /* bit position: 0 */
          /* 0x0000 */ unsigned __int64 HasError : 1; /* bit position: 3 */
          /* 0x0000 */ unsigned __int64 Partition : 11; /* bit position: 4 */
          /* 0x0000 */ unsigned __int64 DanglingIoNodes : 9; /* bit position: 15 */
        }; /* bitfield */
      } /* size: 0x0008 */ Transition;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
} MI_HUGE_PFN, *PMI_HUGE_PFN; /* size: 0x0008 */

