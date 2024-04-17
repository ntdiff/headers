typedef struct _DEVICE_MANAGE_DATA_SET_ATTRIBUTES_OUTPUT
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long Action;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long OperationStatus;
  /* 0x0010 */ unsigned long ExtendedError;
  /* 0x0014 */ unsigned long TargetDetailedError;
  /* 0x0018 */ unsigned long ReservedStatus;
  /* 0x001c */ unsigned long OutputBlockOffset;
  /* 0x0020 */ unsigned long OutputBlockLength;
} DEVICE_MANAGE_DATA_SET_ATTRIBUTES_OUTPUT, *PDEVICE_MANAGE_DATA_SET_ATTRIBUTES_OUTPUT; /* size: 0x0024 */

