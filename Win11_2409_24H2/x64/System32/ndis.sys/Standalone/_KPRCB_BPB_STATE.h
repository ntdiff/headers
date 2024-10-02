typedef union _KPRCB_BPB_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short CpuIdle : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned short FlushRsbOnTrap : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned short IbpbOnReturn : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned short IbpbOnTrap : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned short IbpbOnRetpolineExit : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned short FlushRsbOnReturn : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned short FlushRsbOnRetpolineExit : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned short FlushBhbOnTrap : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned short DivideOnReturn : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned short Reserved1 : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned short Spare : 6; /* bit position: 10 */
    }; /* bitfield */
    /* 0x0000 */ unsigned short AllFlags;
  }; /* size: 0x0002 */
} KPRCB_BPB_STATE, *PKPRCB_BPB_STATE; /* size: 0x0002 */

