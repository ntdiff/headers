typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef enum _REFS_SMR_VOLUME_GC_STATE
{
  SmrGcStateInactive = 0,
  SmrGcStatePaused = 1,
  SmrGcStateActive = 2,
  SmrGcStateActiveFullSpeed = 3,
} REFS_SMR_VOLUME_GC_STATE, *PREFS_SMR_VOLUME_GC_STATE;

typedef struct _REFS_SMR_VOLUME_INFO_OUTPUT
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ union _LARGE_INTEGER SizeOfRandomlyWritableTier;
  /* 0x0010 */ union _LARGE_INTEGER FreeSpaceInRandomlyWritableTier;
  /* 0x0018 */ union _LARGE_INTEGER SizeofSMRTier;
  /* 0x0020 */ union _LARGE_INTEGER FreeSpaceInSMRTier;
  /* 0x0028 */ union _LARGE_INTEGER UsableFreeSpaceInSMRTier;
  /* 0x0030 */ enum _REFS_SMR_VOLUME_GC_STATE VolumeGcState;
  /* 0x0034 */ long VolumeGcLastStatus;
  /* 0x0038 */ unsigned long CurrentGcBandFillPercentage;
  /* 0x0040 */ unsigned __int64 Unused[6];
} REFS_SMR_VOLUME_INFO_OUTPUT, *PREFS_SMR_VOLUME_INFO_OUTPUT; /* size: 0x0070 */

