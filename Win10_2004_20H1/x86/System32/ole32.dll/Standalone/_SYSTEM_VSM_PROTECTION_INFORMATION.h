typedef struct _SYSTEM_VSM_PROTECTION_INFORMATION
{
  /* 0x0000 */ unsigned char DmaProtectionsAvailable;
  /* 0x0001 */ unsigned char DmaProtectionsInUse;
  /* 0x0002 */ unsigned char HardwareMbecAvailable;
  /* 0x0003 */ unsigned char ApicVirtualizationAvailable;
} SYSTEM_VSM_PROTECTION_INFORMATION, *PSYSTEM_VSM_PROTECTION_INFORMATION; /* size: 0x0004 */

