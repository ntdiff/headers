typedef struct _INTERRUPT_REMAPPING_INFO
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long IrtIndex : 30; /* bit position: 0 */
    /* 0x0000 */ unsigned long FlagHalInternal : 1; /* bit position: 30 */
    /* 0x0000 */ unsigned long FlagTranslated : 1; /* bit position: 31 */
  }; /* bitfield */
  union
  {
    struct
    {
      /* 0x0004 */ unsigned long MessageAddressHigh;
      /* 0x0008 */ unsigned long MessageAddressLow;
      /* 0x000c */ unsigned short MessageData;
      /* 0x000e */ unsigned short Reserved;
    } /* size: 0x000c */ Msi;
  } /* size: 0x000c */ u;
} INTERRUPT_REMAPPING_INFO, *PINTERRUPT_REMAPPING_INFO; /* size: 0x0010 */

