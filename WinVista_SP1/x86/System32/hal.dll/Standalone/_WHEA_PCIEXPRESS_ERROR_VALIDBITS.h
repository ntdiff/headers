typedef union _WHEA_PCIEXPRESS_ERROR_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 PortType : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Version : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 CommandStatus : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 DeviceId : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 DeviceSerialNumber : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 BridgeControlStatus : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned __int64 ExpressCapability : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned __int64 AerInfo : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned __int64 Reserved : 56; /* bit position: 8 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 ValidBits;
  }; /* size: 0x0008 */
} WHEA_PCIEXPRESS_ERROR_VALIDBITS, *PWHEA_PCIEXPRESS_ERROR_VALIDBITS; /* size: 0x0008 */

