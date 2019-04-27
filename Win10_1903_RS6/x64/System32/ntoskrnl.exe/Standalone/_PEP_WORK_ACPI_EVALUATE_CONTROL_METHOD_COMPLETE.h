typedef struct _PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE
{
  /* 0x0000 */ struct POHANDLE__* DeviceHandle;
  /* 0x0008 */ unsigned long CompletionFlags;
  /* 0x000c */ long MethodStatus;
  /* 0x0010 */ void* CompletionContext;
  /* 0x0018 */ unsigned __int64 OutputArgumentSize;
  /* 0x0020 */ struct _ACPI_METHOD_ARGUMENT_V1* OutputArguments;
} PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE, *PPEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE; /* size: 0x0028 */

