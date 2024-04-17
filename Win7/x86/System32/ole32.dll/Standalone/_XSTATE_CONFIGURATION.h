typedef struct _XSTATE_FEATURE
{
  /* 0x0000 */ unsigned long Offset;
  /* 0x0004 */ unsigned long Size;
} XSTATE_FEATURE, *PXSTATE_FEATURE; /* size: 0x0008 */

typedef struct _XSTATE_CONFIGURATION
{
  /* 0x0000 */ unsigned __int64 EnabledFeatures;
  /* 0x0008 */ unsigned long Size;
  /* 0x000c */ unsigned long OptimizedSave : 1; /* bit position: 0 */
  /* 0x0010 */ struct _XSTATE_FEATURE Features[64];
} XSTATE_CONFIGURATION, *PXSTATE_CONFIGURATION; /* size: 0x0210 */

