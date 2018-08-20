typedef union _WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short BridgeSecondaryStatus;
      /* 0x0002 */ unsigned short BridgeControl;
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS, *PWHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS; /* size: 0x0004 */

