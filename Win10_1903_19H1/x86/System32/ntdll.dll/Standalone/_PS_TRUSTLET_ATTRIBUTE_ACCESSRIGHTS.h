typedef union _PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char Trustlet : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char Ntos : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned char WriteHandle : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned char ReadHandle : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned char Reserved : 4; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char AccessRights;
  }; /* size: 0x0001 */
} PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS, *PPS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS; /* size: 0x0001 */

