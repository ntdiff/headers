typedef enum _SYSTEM_FIRMWARE_TABLE_ACTION
{
  SystemFirmwareTable_Enumerate = 0,
  SystemFirmwareTable_Get = 1,
} SYSTEM_FIRMWARE_TABLE_ACTION, *PSYSTEM_FIRMWARE_TABLE_ACTION;

typedef struct _SYSTEM_FIRMWARE_TABLE_INFORMATION
{
  /* 0x0000 */ unsigned long ProviderSignature;
  /* 0x0004 */ enum _SYSTEM_FIRMWARE_TABLE_ACTION Action;
  /* 0x0008 */ unsigned long TableID;
  /* 0x000c */ unsigned long TableBufferLength;
  /* 0x0010 */ unsigned char TableBuffer[1];
  /* 0x0011 */ char __PADDING__[3];
} SYSTEM_FIRMWARE_TABLE_INFORMATION, *PSYSTEM_FIRMWARE_TABLE_INFORMATION; /* size: 0x0014 */

