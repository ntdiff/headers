typedef union _RTL_HP_LFH_CONFIG
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short MaxBlockSize;
      /* 0x0002 */ unsigned short WitholdPageCrossingBlocks : 1; /* bit position: 0 */
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long AllFields;
  }; /* size: 0x0004 */
} RTL_HP_LFH_CONFIG, *PRTL_HP_LFH_CONFIG; /* size: 0x0004 */

