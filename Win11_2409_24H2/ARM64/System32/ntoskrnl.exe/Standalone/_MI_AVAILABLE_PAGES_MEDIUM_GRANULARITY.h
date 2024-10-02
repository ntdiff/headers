typedef union _MI_AVAILABLE_PAGES_MEDIUM_GRANULARITY
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short SmallFreeZeroPages : 5; /* bit position: 0 */
      /* 0x0000 */ unsigned short SmallAvailablePages : 5; /* bit position: 5 */
      /* 0x0000 */ unsigned short Spare : 6; /* bit position: 10 */
    }; /* bitfield */
    /* 0x0000 */ unsigned short EntireValue;
    /* 0x0000 */ short EntireValueSigned;
    /* 0x0000 */ volatile short EntireValueVolatile;
  }; /* size: 0x0002 */
} MI_AVAILABLE_PAGES_MEDIUM_GRANULARITY, *PMI_AVAILABLE_PAGES_MEDIUM_GRANULARITY; /* size: 0x0002 */

