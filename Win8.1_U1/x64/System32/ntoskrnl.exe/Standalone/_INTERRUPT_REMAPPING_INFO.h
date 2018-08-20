typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_2
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} ULARGE_INTEGER, *PULARGE_INTEGER; /* size: 0x0008 */

typedef struct _INTERRUPT_REMAPPING_INFO
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long IrtIndex : 30; /* bit position: 0 */
    /* 0x0000 */ unsigned long FlagHalInternal : 1; /* bit position: 30 */
    /* 0x0000 */ unsigned long FlagTranslated : 1; /* bit position: 31 */
  }; /* bitfield */
  union // _TAG_UNNAMED_59
  {
    union
    {
      /* 0x0008 */ union _ULARGE_INTEGER RemappedFormat;
      struct // _TAG_UNNAMED_60
      {
        /* 0x0008 */ unsigned long MessageAddressLow;
        /* 0x000c */ unsigned short MessageData;
        /* 0x000e */ unsigned short Reserved;
      } /* size: 0x0008 */ Msi;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u;
} INTERRUPT_REMAPPING_INFO, *PINTERRUPT_REMAPPING_INFO; /* size: 0x0010 */

