typedef struct _XSTATE_FEATURE
{
  /* 0x0000 */ unsigned long Offset;
  /* 0x0004 */ unsigned long Size;
} XSTATE_FEATURE, *PXSTATE_FEATURE; /* size: 0x0008 */

typedef struct _XSTATE_CONFIG_FEATURE_MSC_INFO
{
  /* 0x0000 */ unsigned int SizeOfInfo;
  /* 0x0004 */ unsigned int ContextSize;
  /* 0x0008 */ unsigned __int64 EnabledFeatures;
  /* 0x0010 */ struct _XSTATE_FEATURE Features[64];
} XSTATE_CONFIG_FEATURE_MSC_INFO, *PXSTATE_CONFIG_FEATURE_MSC_INFO; /* size: 0x0210 */

