typedef struct _KSDEVICE_DESCRIPTOR
{
  /* 0x0000 */ const struct _KSDEVICE_DISPATCH* Dispatch;
  /* 0x0008 */ unsigned long FilterDescriptorsCount;
  /* 0x0010 */ const struct _KSFILTER_DESCRIPTOR* const* FilterDescriptors;
  /* 0x0018 */ unsigned long Version;
  /* 0x001c */ unsigned long Flags;
} KSDEVICE_DESCRIPTOR, *PKSDEVICE_DESCRIPTOR; /* size: 0x0020 */

