typedef enum _REFS_SMR_VOLUME_GC_ACTION
{
  SmrGcActionStart = 1,
  SmrGcActionStartFullSpeed = 2,
  SmrGcActionPause = 3,
  SmrGcActionStop = 4,
} REFS_SMR_VOLUME_GC_ACTION, *PREFS_SMR_VOLUME_GC_ACTION;

typedef enum _REFS_SMR_VOLUME_GC_METHOD
{
  SmrGcMethodCompaction = 1,
  SmrGcMethodCompression = 2,
  SmrGcMethodRotation = 3,
} REFS_SMR_VOLUME_GC_METHOD, *PREFS_SMR_VOLUME_GC_METHOD;

typedef struct _REFS_SMR_VOLUME_GC_PARAMETERS
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ enum _REFS_SMR_VOLUME_GC_ACTION Action;
  /* 0x000c */ enum _REFS_SMR_VOLUME_GC_METHOD Method;
  /* 0x0010 */ unsigned long IoGranularity;
  /* 0x0014 */ unsigned long CompressionFormat;
  /* 0x0018 */ unsigned __int64 Unused[8];
} REFS_SMR_VOLUME_GC_PARAMETERS, *PREFS_SMR_VOLUME_GC_PARAMETERS; /* size: 0x0058 */

