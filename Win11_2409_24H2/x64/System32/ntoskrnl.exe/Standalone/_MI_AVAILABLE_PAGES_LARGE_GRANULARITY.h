typedef union _MI_AVAILABLE_PAGES_LARGE_GRANULARITY
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short SmallAvailablePages : 10; /* bit position: 0 */
      /* 0x0000 */ unsigned short MediumFreeZeroPages : 6; /* bit position: 10 */
    }; /* bitfield */
    /* 0x0000 */ unsigned short EntireValue;
    /* 0x0000 */ short EntireValueSigned;
    /* 0x0000 */ volatile short EntireValueVolatile;
  }; /* size: 0x0002 */
} MI_AVAILABLE_PAGES_LARGE_GRANULARITY, *PMI_AVAILABLE_PAGES_LARGE_GRANULARITY; /* size: 0x0002 */

