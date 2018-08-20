typedef enum _PCI_HOTPLUG_SLOT_INTERRUPT
{
  SlotInterruptPresenceDetect = 0,
  SlotInterruptLatchChange = 1,
  SlotInterruptAttentionButton = 2,
  SlotInterruptPowerFault = 3,
  SlotInterruptMaximum = 7,
} PCI_HOTPLUG_SLOT_INTERRUPT, *PPCI_HOTPLUG_SLOT_INTERRUPT;

