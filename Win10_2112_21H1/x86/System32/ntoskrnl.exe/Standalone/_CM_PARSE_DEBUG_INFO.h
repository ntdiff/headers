typedef struct _CM_PARSE_DEBUG_INFO
{
  /* 0x0000 */ struct _CM_KEY_CONTROL_BLOCK* SymlinkCachedKcb;
  /* 0x0004 */ struct _CM_KEY_CONTROL_BLOCK* StartingKcb;
  /* 0x0008 */ struct _CM_KEY_CONTROL_BLOCK* KcbCacheResult;
  /* 0x000c */ struct _CM_KEY_CONTROL_BLOCK* WalkResult;
  /* 0x0010 */ struct _CM_KEY_CONTROL_BLOCK* DeepestKcbFound;
  /* 0x0014 */ unsigned char KcbCacheLevels;
  /* 0x0015 */ unsigned char WalkLevels;
  /* 0x0016 */ unsigned char FailureCount;
  /* 0x0018 */ struct
  {
    /* 0x0018 */ long Status;
    /* 0x001c */ unsigned long Point;
  } /* size: 0x0008 */ FailurePoints[4];
} CM_PARSE_DEBUG_INFO, *PCM_PARSE_DEBUG_INFO; /* size: 0x0038 */

