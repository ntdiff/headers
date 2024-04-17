typedef struct _KEY_TRUST_INFORMATION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long TrustedKey : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long Reserved : 31; /* bit position: 1 */
  }; /* bitfield */
} KEY_TRUST_INFORMATION, *PKEY_TRUST_INFORMATION; /* size: 0x0004 */

