typedef struct _SYSTEM_FIRMWARE_TABLE_HANDLER
{
  /* 0x0000 */ unsigned long ProviderSignature;
  /* 0x0004 */ unsigned char Register;
  /* 0x0008 */ void* FirmwareTableHandler /* function */;
  /* 0x000c */ void* DriverObject;
} SYSTEM_FIRMWARE_TABLE_HANDLER, *PSYSTEM_FIRMWARE_TABLE_HANDLER; /* size: 0x0010 */

