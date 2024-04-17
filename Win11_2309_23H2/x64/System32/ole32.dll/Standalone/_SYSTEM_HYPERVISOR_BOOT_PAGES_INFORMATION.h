typedef struct _SYSTEM_HYPERVISOR_BOOT_PAGES_INFORMATION
{
  /* 0x0000 */ unsigned long RangeCount;
  /* 0x0004 */ unsigned long Pad;
  /* 0x0008 */ unsigned __int64 RangeArray[1];
} SYSTEM_HYPERVISOR_BOOT_PAGES_INFORMATION, *PSYSTEM_HYPERVISOR_BOOT_PAGES_INFORMATION; /* size: 0x0010 */

