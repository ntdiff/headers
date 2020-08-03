typedef struct _DEVICE_MANAGE_DATA_SET_ATTRIBUTES
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long Action;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long ParameterBlockOffset;
  /* 0x0010 */ unsigned long ParameterBlockLength;
  /* 0x0014 */ unsigned long DataSetRangesOffset;
  /* 0x0018 */ unsigned long DataSetRangesLength;
} DEVICE_MANAGE_DATA_SET_ATTRIBUTES, *PDEVICE_MANAGE_DATA_SET_ATTRIBUTES; /* size: 0x001c */

