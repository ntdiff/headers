typedef struct _XSAVE_FEATURE
{
  /* 0x0000 */ unsigned long FeatureId;
  union
  {
    /* 0x0008 */ struct _XSAVE_VENDORS* Vendors;
    /* 0x0008 */ unsigned __int64 Unused;
  }; /* size: 0x0008 */
} XSAVE_FEATURE, *PXSAVE_FEATURE; /* size: 0x0010 */

