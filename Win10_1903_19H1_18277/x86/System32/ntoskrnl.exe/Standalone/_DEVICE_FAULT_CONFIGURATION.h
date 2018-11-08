typedef struct _DEVICE_FAULT_CONFIGURATION
{
  /* 0x0000 */ void* FaultHandler /* function */;
  /* 0x0004 */ void* FaultContext;
} DEVICE_FAULT_CONFIGURATION, *PDEVICE_FAULT_CONFIGURATION; /* size: 0x0008 */

