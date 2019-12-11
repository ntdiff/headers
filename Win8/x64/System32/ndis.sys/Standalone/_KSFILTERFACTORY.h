typedef struct _KSFILTERFACTORY
{
  /* 0x0000 */ const struct _KSFILTER_DESCRIPTOR* FilterDescriptor;
  /* 0x0008 */ void* Bag;
  /* 0x0010 */ void* Context;
} KSFILTERFACTORY, *PKSFILTERFACTORY; /* size: 0x0018 */

