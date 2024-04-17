typedef union _PROCESS_READWRITEVM_LOGGING_INFORMATION
{
  union
  {
    /* 0x0000 */ unsigned char Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char EnableReadVmLogging : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char EnableWriteVmLogging : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned char Unused : 6; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0001 */
} PROCESS_READWRITEVM_LOGGING_INFORMATION, *PPROCESS_READWRITEVM_LOGGING_INFORMATION; /* size: 0x0001 */

