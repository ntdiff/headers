typedef union _KHETERO_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char Qos : 3; /* bit position: 0 */
      /* 0x0000 */ unsigned char WorkloadClass : 3; /* bit position: 3 */
      /* 0x0000 */ unsigned char RunningType : 1; /* bit position: 6 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char AllFields;
  }; /* size: 0x0001 */
} KHETERO_STATE, *PKHETERO_STATE; /* size: 0x0001 */

