typedef struct _PEP_WORK_ACPI_NOTIFY
{
  /* 0x0000 */ struct POHANDLE__* DeviceHandle;
  /* 0x0008 */ unsigned long NotifyCode;
  /* 0x000c */ long __PADDING__[1];
} PEP_WORK_ACPI_NOTIFY, *PPEP_WORK_ACPI_NOTIFY; /* size: 0x0010 */

