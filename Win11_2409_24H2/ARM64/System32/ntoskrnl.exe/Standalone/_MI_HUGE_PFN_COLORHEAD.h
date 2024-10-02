typedef struct _MI_HUGE_PFN_COLORHEAD
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
          /* 0x0000 */ unsigned __int64 LockBit : 1; /* bit position: 3 */
          /* 0x0000 */ unsigned __int64 Partition : 11; /* bit position: 4 */
          /* 0x0000 */ unsigned __int64 Flink : 18; /* bit position: 15 */
          /* 0x0000 */ unsigned __int64 Blink : 18; /* bit position: 33 */
        }; /* bitfield */
      } /* size: 0x0008 */ OnList;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
} MI_HUGE_PFN_COLORHEAD, *PMI_HUGE_PFN_COLORHEAD; /* size: 0x0008 */

