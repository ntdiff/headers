typedef struct _MANAGE_WRITES_TO_EXECUTABLE_MEMORY
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Version : 8; /* bit position: 0 */
    /* 0x0000 */ unsigned long ProcessEnableWriteExceptions : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned long ThreadAllowWrites : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned long Spare : 22; /* bit position: 10 */
  }; /* bitfield */
  /* 0x0004 */ void* KernelWriteToExecutableSignal;
} MANAGE_WRITES_TO_EXECUTABLE_MEMORY, *PMANAGE_WRITES_TO_EXECUTABLE_MEMORY; /* size: 0x0008 */

