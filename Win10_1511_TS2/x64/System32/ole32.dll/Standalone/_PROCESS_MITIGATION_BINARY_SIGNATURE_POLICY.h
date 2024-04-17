typedef struct _PROCESS_MITIGATION_BINARY_SIGNATURE_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long MicrosoftSignedOnly : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long StoreSignedOnly : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long MitigationOptIn : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long ReservedFlags : 29; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_BINARY_SIGNATURE_POLICY, *PPROCESS_MITIGATION_BINARY_SIGNATURE_POLICY; /* size: 0x0004 */

