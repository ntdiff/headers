typedef struct _PCI_MSI_MESSAGE_CONTROL
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned short MSIEnable : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned short MultipleMessageCapable : 3; /* bit position: 1 */
    /* 0x0000 */ unsigned short MultipleMessageEnable : 3; /* bit position: 4 */
    /* 0x0000 */ unsigned short CapableOf64Bits : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned short PerVectorMaskCapable : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned short Reserved : 7; /* bit position: 9 */
  }; /* bitfield */
} PCI_MSI_MESSAGE_CONTROL, *PPCI_MSI_MESSAGE_CONTROL; /* size: 0x0002 */

