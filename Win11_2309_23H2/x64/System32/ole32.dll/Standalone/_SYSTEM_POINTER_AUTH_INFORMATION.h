typedef struct _SYSTEM_POINTER_AUTH_INFORMATION
{
  union
  {
    /* 0x0000 */ unsigned short SupportedFlags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short AddressAuthSupported : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned short AddressAuthQarma : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned short GenericAuthSupported : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned short GenericAuthQarma : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned short SupportedReserved : 12; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0002 */
  union
  {
    /* 0x0002 */ unsigned short EnabledFlags;
    struct /* bitfield */
    {
      /* 0x0002 */ unsigned short UserPerProcessIpAuthEnabled : 1; /* bit position: 0 */
      /* 0x0002 */ unsigned short UserGlobalIpAuthEnabled : 1; /* bit position: 1 */
      /* 0x0002 */ unsigned short UserEnabledReserved : 6; /* bit position: 2 */
      /* 0x0002 */ unsigned short KernelIpAuthEnabled : 1; /* bit position: 8 */
      /* 0x0002 */ unsigned short KernelEnabledReserved : 7; /* bit position: 9 */
    }; /* bitfield */
  }; /* size: 0x0002 */
} SYSTEM_POINTER_AUTH_INFORMATION, *PSYSTEM_POINTER_AUTH_INFORMATION; /* size: 0x0004 */

