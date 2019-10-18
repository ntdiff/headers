typedef union _MCI_ADDR
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long Address;
      /* 0x0004 */ unsigned long Reserved;
    }; /* size: 0x0008 */
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} MCI_ADDR, *PMCI_ADDR; /* size: 0x0008 */

