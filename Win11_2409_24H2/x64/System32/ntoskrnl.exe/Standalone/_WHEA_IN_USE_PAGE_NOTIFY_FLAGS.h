typedef union _WHEA_IN_USE_PAGE_NOTIFY_FLAGS
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned char PlatformDirected : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned char PageSwapped : 1; /* bit position: 1 */
        /* 0x0000 */ unsigned char PageDemoted : 1; /* bit position: 2 */
        /* 0x0000 */ unsigned char Reserved : 3; /* bit position: 3 */
        /* 0x0000 */ unsigned char NotifyAllOfflines : 1; /* bit position: 6 */
        /* 0x0000 */ unsigned char PageOfflined : 1; /* bit position: 7 */
      }; /* bitfield */
    } /* size: 0x0001 */ Bits;
    /* 0x0000 */ unsigned char AsUCHAR;
  }; /* size: 0x0001 */
} WHEA_IN_USE_PAGE_NOTIFY_FLAGS, *PWHEA_IN_USE_PAGE_NOTIFY_FLAGS; /* size: 0x0001 */

