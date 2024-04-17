typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  union
  {
    /* 0x0008 */ unsigned __int64 Bitmap[1];
    /* 0x0008 */ unsigned __int64 StaticBitmap[32];
  }; /* size: 0x0100 */
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x0108 */

typedef struct _KSTATIC_AFFINITY_BLOCK
{
  union
  {
    /* 0x0000 */ struct _KAFFINITY_EX KeFlushTbAffinity;
    /* 0x0000 */ struct _KAFFINITY_EX KeFlushWbAffinity;
    /* 0x0000 */ struct _KAFFINITY_EX KeSyncContextAffinity;
  }; /* size: 0x0108 */
  /* 0x0108 */ struct _KAFFINITY_EX KeFlushTbDeepIdleAffinity;
  /* 0x0210 */ struct _KAFFINITY_EX KeIpiSendAffinity;
  /* 0x0318 */ struct _KAFFINITY_EX KeIpiSendIpiSet;
} KSTATIC_AFFINITY_BLOCK, *PKSTATIC_AFFINITY_BLOCK; /* size: 0x0420 */

