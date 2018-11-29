typedef struct _XSTATE_FEATURE
{
  /* 0x0000 */ unsigned long Offset;
  /* 0x0004 */ unsigned long Size;
} XSTATE_FEATURE, *PXSTATE_FEATURE; /* size: 0x0008 */

typedef struct _XSTATE_CONFIGURATION
{
  /* 0x0000 */ unsigned __int64 EnabledFeatures;
  /* 0x0008 */ unsigned __int64 EnabledVolatileFeatures;
  /* 0x0010 */ unsigned long Size;
  union
  {
    /* 0x0014 */ unsigned long ControlFlags;
    struct /* bitfield */
    {
      /* 0x0014 */ unsigned long OptimizedSave : 1; /* bit position: 0 */
      /* 0x0014 */ unsigned long CompactionEnabled : 1; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0018 */ struct _XSTATE_FEATURE Features[64];
  /* 0x0218 */ unsigned __int64 EnabledSupervisorFeatures;
  /* 0x0220 */ unsigned __int64 AlignedFeatures;
  /* 0x0228 */ unsigned long AllFeatureSize;
  /* 0x022c */ unsigned long AllFeatures[64];
  /* 0x0330 */ unsigned __int64 EnabledUserVisibleSupervisorFeatures;
} XSTATE_CONFIGURATION, *PXSTATE_CONFIGURATION; /* size: 0x0338 */

