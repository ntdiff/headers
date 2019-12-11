typedef struct _KSFILTER
{
  /* 0x0000 */ const struct _KSFILTER_DESCRIPTOR* Descriptor;
  /* 0x0008 */ void* Bag;
  /* 0x0010 */ void* Context;
} KSFILTER, *PKSFILTER; /* size: 0x0018 */

