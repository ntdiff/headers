typedef union _KI_AVAILABLE_CPUS_WORK_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long WorkerExecuting : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long WorkPresent : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Reserved : 30; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AllFields;
  }; /* size: 0x0004 */
} KI_AVAILABLE_CPUS_WORK_STATE, *PKI_AVAILABLE_CPUS_WORK_STATE; /* size: 0x0004 */

