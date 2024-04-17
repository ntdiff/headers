typedef struct _PCI_SLOT_NUMBER
{
  union
  {
    union
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x0000 */ unsigned long DeviceNumber : 5; /* bit position: 0 */
          /* 0x0000 */ unsigned long FunctionNumber : 3; /* bit position: 5 */
          /* 0x0000 */ unsigned long Reserved : 24; /* bit position: 8 */
        }; /* bitfield */
      } /* size: 0x0004 */ bits;
      /* 0x0000 */ unsigned long AsULONG;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
} PCI_SLOT_NUMBER, *PPCI_SLOT_NUMBER; /* size: 0x0004 */

