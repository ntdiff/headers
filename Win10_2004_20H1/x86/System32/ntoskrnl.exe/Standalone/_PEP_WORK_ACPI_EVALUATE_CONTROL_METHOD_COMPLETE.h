typedef struct _PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE
{
  /* 0x0000 */ struct POHANDLE__* DeviceHandle;
  /* 0x0004 */ unsigned long CompletionFlags;
  /* 0x0008 */ long MethodStatus;
  /* 0x000c */ void* CompletionContext;
  /* 0x0010 */ unsigned long OutputArgumentSize;
  /* 0x0014 */ struct _ACPI_METHOD_ARGUMENT_V1* OutputArguments;
} PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE, *PPEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE; /* size: 0x0018 */

