typedef struct _RTL_BITMAP_EX
{
  /* 0x0000 */ unsigned __int64 SizeOfBitMap;
  /* 0x0008 */ unsigned __int64* Buffer;
} RTL_BITMAP_EX, *PRTL_BITMAP_EX; /* size: 0x0010 */

typedef struct _MI_DYNAMIC_BITMAP
{
  /* 0x0000 */ struct _RTL_BITMAP_EX Bitmap;
  /* 0x0010 */ unsigned __int64 MaximumSize;
  /* 0x0018 */ unsigned __int64 Hint;
  /* 0x0020 */ void* BaseVa;
  /* 0x0028 */ unsigned __int64 SizeTopDown;
  /* 0x0030 */ unsigned __int64 HintTopDown;
  /* 0x0038 */ void* BaseVaTopDown;
  /* 0x0040 */ unsigned __int64 SpinLock;
} MI_DYNAMIC_BITMAP, *PMI_DYNAMIC_BITMAP; /* size: 0x0048 */

typedef enum _MI_PFN_CACHE_ATTRIBUTE
{
  MiNonCached = 0,
  MiCached = 1,
  MiWriteCombined = 2,
  MiNotMapped = 3,
} MI_PFN_CACHE_ATTRIBUTE, *PMI_PFN_CACHE_ATTRIBUTE;

typedef struct _MI_ZERO_COST_COUNTS
{
  /* 0x0000 */ unsigned __int64 NativeSum;
  /* 0x0008 */ unsigned __int64 AlternateSum;
} MI_ZERO_COST_COUNTS, *PMI_ZERO_COST_COUNTS; /* size: 0x0010 */

typedef struct _MI_SYSTEM_NODE_NONPAGED_POOL
{
  /* 0x0000 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapNonPagedPool;
  /* 0x0048 */ unsigned __int64 CachedNonPagedPoolCount;
  /* 0x0050 */ unsigned __int64 NonPagedPoolSpinLock;
  /* 0x0058 */ struct _MMPFN* CachedNonPagedPool;
  /* 0x0060 */ void* NonPagedPoolFirstVa;
  /* 0x0068 */ void* NonPagedPoolLastVa;
  /* 0x0070 */ enum _MI_PFN_CACHE_ATTRIBUTE OptimalZeroingAttribute[4][4];
  /* 0x00b0 */ struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2][2][3];
  /* 0x0170 */ struct _MI_SYSTEM_NODE_INFORMATION* SystemNodeInformation;
} MI_SYSTEM_NODE_NONPAGED_POOL, *PMI_SYSTEM_NODE_NONPAGED_POOL; /* size: 0x0178 */

