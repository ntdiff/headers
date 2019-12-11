typedef struct _KSDEVICE_DESCRIPTOR
{
  /* 0x0000 */ const struct _KSDEVICE_DISPATCH* Dispatch;
  /* 0x0004 */ unsigned long FilterDescriptorsCount;
  /* 0x0008 */ const struct _KSFILTER_DESCRIPTOR* const* FilterDescriptors;
  /* 0x000c */ unsigned long Version;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ void* Alignment;
} KSDEVICE_DESCRIPTOR, *PKSDEVICE_DESCRIPTOR; /* size: 0x0018 */

