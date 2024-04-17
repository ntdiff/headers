typedef struct _SYSTEM_ISOLATED_USER_MODE_INFORMATION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char SecureKernelRunning : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char HvciEnabled : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char HvciStrictMode : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned char DebugEnabled : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char SpareFlags : 4; /* bit position: 4 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0001 */ unsigned char TrustletRunning : 1; /* bit position: 0 */
    /* 0x0001 */ unsigned char SpareFlags2 : 7; /* bit position: 1 */
  }; /* bitfield */
  /* 0x0002 */ unsigned char Spare0[6];
  /* 0x0008 */ unsigned __int64 Spare1;
} SYSTEM_ISOLATED_USER_MODE_INFORMATION, *PSYSTEM_ISOLATED_USER_MODE_INFORMATION; /* size: 0x0010 */

