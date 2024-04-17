typedef struct _DEVICE_WRITE_AGGREGATION_DESCRIPTOR
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned char BenefitsFromWriteAggregation;
  /* 0x0009 */ char __PADDING__[3];
} DEVICE_WRITE_AGGREGATION_DESCRIPTOR, *PDEVICE_WRITE_AGGREGATION_DESCRIPTOR; /* size: 0x000c */

