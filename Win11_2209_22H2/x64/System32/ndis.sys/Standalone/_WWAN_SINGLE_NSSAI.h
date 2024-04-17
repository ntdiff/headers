typedef struct _WWAN_SINGLE_NSSAI
{
  /* 0x0000 */ unsigned int Bitmasks;
  /* 0x0004 */ unsigned short SliceServiceType;
  /* 0x0006 */ unsigned short MappedSliceServiceType;
  /* 0x0008 */ unsigned int SliceDifferentiator;
  /* 0x000c */ unsigned int MappedSliceDifferentiator;
} WWAN_SINGLE_NSSAI, *PWWAN_SINGLE_NSSAI; /* size: 0x0010 */

