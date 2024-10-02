typedef struct _SYSTEM_ISOLATED_USER_MODE_INFORMATION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char SecureKernelRunning : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char HvciEnabled : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char HvciStrictMode : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned char DebugEnabled : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char FirmwarePageProtection : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char EncryptionKeyAvailable : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char SpareFlags : 2; /* bit position: 6 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0001 */ unsigned char TrustletRunning : 1; /* bit position: 0 */
    /* 0x0001 */ unsigned char HvciDisableAllowed : 1; /* bit position: 1 */
    /* 0x0001 */ unsigned char HardwareEnforcedVbs : 1; /* bit position: 2 */
    /* 0x0001 */ unsigned char NoSecrets : 1; /* bit position: 3 */
    /* 0x0001 */ unsigned char EncryptionKeyPersistent : 1; /* bit position: 4 */
    /* 0x0001 */ unsigned char HardwareEnforcedHvpt : 1; /* bit position: 5 */
    /* 0x0001 */ unsigned char HardwareHvptAvailable : 1; /* bit position: 6 */
    /* 0x0001 */ unsigned char SpareFlags2 : 1; /* bit position: 7 */
  }; /* bitfield */
  /* 0x0002 */ unsigned char Spare0[6];
  /* 0x0008 */ unsigned __int64 Spare1;
} SYSTEM_ISOLATED_USER_MODE_INFORMATION, *PSYSTEM_ISOLATED_USER_MODE_INFORMATION; /* size: 0x0010 */

