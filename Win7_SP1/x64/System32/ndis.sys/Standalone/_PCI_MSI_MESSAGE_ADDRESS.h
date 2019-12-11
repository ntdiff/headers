typedef struct _PCI_MSI_MESSAGE_ADDRESS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Reserved : 2; /* bit position: 0 */
    /* 0x0000 */ unsigned long Address : 30; /* bit position: 2 */
  }; /* bitfield */
} PCI_MSI_MESSAGE_ADDRESS, *PPCI_MSI_MESSAGE_ADDRESS; /* size: 0x0004 */

