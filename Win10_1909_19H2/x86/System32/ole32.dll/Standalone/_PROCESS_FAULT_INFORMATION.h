typedef struct _PROCESS_FAULT_INFORMATION
{
  /* 0x0000 */ unsigned long FaultFlags;
  /* 0x0004 */ unsigned long AdditionalInfo;
} PROCESS_FAULT_INFORMATION, *PPROCESS_FAULT_INFORMATION; /* size: 0x0008 */

