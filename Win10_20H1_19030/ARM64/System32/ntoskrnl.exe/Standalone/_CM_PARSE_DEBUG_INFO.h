typedef struct _CM_PARSE_DEBUG_INFO
{
  /* 0x0000 */ struct _CM_KEY_CONTROL_BLOCK* SymlinkCachedKcb;
  /* 0x0008 */ struct _CM_KEY_CONTROL_BLOCK* StartingKcb;
  /* 0x0010 */ struct _CM_KEY_CONTROL_BLOCK* KcbCacheResult;
  /* 0x0018 */ struct _CM_KEY_CONTROL_BLOCK* WalkResult;
  /* 0x0020 */ struct _CM_KEY_CONTROL_BLOCK* DeepestKcbFound;
  /* 0x0028 */ unsigned char KcbCacheLevels;
  /* 0x0029 */ unsigned char WalkLevels;
  /* 0x002a */ unsigned char FailureCount;
  /* 0x002c */ struct
  {
    /* 0x002c */ long Status;
    /* 0x0030 */ unsigned long Point;
  } /* size: 0x0008 */ FailurePoints[4];
  /* 0x004c */ long __PADDING__[1];
} CM_PARSE_DEBUG_INFO, *PCM_PARSE_DEBUG_INFO; /* size: 0x0050 */

