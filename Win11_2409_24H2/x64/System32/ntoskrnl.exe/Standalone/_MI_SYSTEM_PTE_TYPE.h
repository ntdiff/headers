typedef struct _RTL_BITMAP_EX
{
  /* 0x0000 */ unsigned __int64 SizeOfBitMap;
  /* 0x0008 */ unsigned __int64* Buffer;
} RTL_BITMAP_EX, *PRTL_BITMAP_EX; /* size: 0x0010 */

typedef enum _MI_SYSTEM_VA_TYPE
{
  MiVaUnused = 0,
  MiVaProcessSpace = 1,
  MiVaBootLoaded = 2,
  MiVaPfnDatabase = 3,
  MiVaNonPagedPool = 4,
  MiVaPagedPool = 5,
  MiVaNonCachedMappings = 6,
  MiVaSystemCache = 7,
  MiVaSystemPtes = 8,
  MiVaHal = 9,
  MiVaNonCachedMappingsLarge = 10,
  MiVaDriverImages = 11,
  MiVaSystemPtesLarge = 12,
  MiVaKernelStacks = 13,
  MiVaSecureNonPagedPool = 14,
  MiVaKernelShadowStacks = 15,
  MiVaSoftWsles = 16,
  MiVaSystemDataViews = 17,
  MiVaKernelControlFlowGuard = 18,
  MiVaKasan = 19,
  MiVaMaximumType = 20,
} MI_SYSTEM_VA_TYPE, *PMI_SYSTEM_VA_TYPE;

typedef struct _MI_SYSTEM_PTE_TYPE
{
  /* 0x0000 */ struct _RTL_BITMAP_EX Bitmap;
  /* 0x0010 */ struct _RTL_BITMAP_EX TrackingBitmap;
  /* 0x0020 */ struct _MMPTE* BasePte;
  /* 0x0028 */ unsigned long Flags;
  /* 0x002c */ enum _MI_SYSTEM_VA_TYPE VaType;
  /* 0x0030 */ unsigned long PteFailures;
  /* 0x0034 */ volatile long SpinLock;
  /* 0x0038 */ volatile unsigned __int64 TotalSystemPtes;
  /* 0x0040 */ unsigned __int64 Hint;
  /* 0x0048 */ volatile unsigned __int64 LowestBitEverAllocated;
  /* 0x0050 */ struct _MI_CACHED_PTES* CachedPtes;
  /* 0x0058 */ volatile unsigned __int64 TotalFreeSystemPtes;
} MI_SYSTEM_PTE_TYPE, *PMI_SYSTEM_PTE_TYPE; /* size: 0x0060 */

