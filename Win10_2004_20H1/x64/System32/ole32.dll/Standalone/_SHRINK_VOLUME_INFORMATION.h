typedef enum _SHRINK_VOLUME_REQUEST_TYPES
{
  ShrinkPrepare = 1,
  ShrinkCommit = 2,
  ShrinkAbort = 3,
} SHRINK_VOLUME_REQUEST_TYPES, *PSHRINK_VOLUME_REQUEST_TYPES;

typedef struct _SHRINK_VOLUME_INFORMATION
{
  /* 0x0000 */ enum _SHRINK_VOLUME_REQUEST_TYPES ShrinkRequestType;
  /* 0x0008 */ unsigned __int64 Flags;
  /* 0x0010 */ __int64 NewNumberOfSectors;
} SHRINK_VOLUME_INFORMATION, *PSHRINK_VOLUME_INFORMATION; /* size: 0x0018 */

