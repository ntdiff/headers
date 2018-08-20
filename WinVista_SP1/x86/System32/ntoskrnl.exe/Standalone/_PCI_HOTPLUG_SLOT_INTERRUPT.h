typedef enum _PCI_HOTPLUG_SLOT_INTERRUPT
{
  SlotInterruptPresenceDetect = 0,
  SlotInterruptLatchChange = 1,
  SlotInterruptAttentionButton = 2,
  SlotInterruptLinkStateChange = 3,
  SlotInterruptPowerFault = 4,
  SlotInterruptMaximum = 7,
} PCI_HOTPLUG_SLOT_INTERRUPT, *PPCI_HOTPLUG_SLOT_INTERRUPT;

