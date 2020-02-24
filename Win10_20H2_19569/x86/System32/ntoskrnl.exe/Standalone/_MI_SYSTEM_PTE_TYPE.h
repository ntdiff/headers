typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef enum _MI_SYSTEM_VA_TYPE
{
  MiVaUnused = 0,
  MiVaSessionSpace = 1,
  MiVaProcessSpace = 2,
  MiVaBootLoaded = 3,
  MiVaPfnDatabase = 4,
  MiVaNonPagedPool = 5,
  MiVaPagedPool = 6,
  MiVaSpecialPoolPaged = 7,
  MiVaSystemCache = 8,
  MiVaSystemPtes = 9,
  MiVaHal = 10,
  MiVaSessionGlobalSpace = 11,
  MiVaDriverImages = 12,
  MiVaSystemPtesLarge = 13,
  MiVaKernelStacks = 14,
  MiVaSecureNonPagedPool = 15,
  MiVaMaximumType = 16,
} MI_SYSTEM_VA_TYPE, *PMI_SYSTEM_VA_TYPE;

typedef struct _MI_SYSTEM_PTE_TYPE
{
  /* 0x0000 */ struct _RTL_BITMAP Bitmap;
  /* 0x0008 */ struct _MMPTE* BasePte;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ enum _MI_SYSTEM_VA_TYPE VaType;
  /* 0x0014 */ unsigned long* FailureCount;
  /* 0x0018 */ unsigned long PteFailures;
  union
  {
    /* 0x001c */ unsigned long SpinLock;
    /* 0x001c */ struct _EX_PUSH_LOCK* GlobalPushLock;
  }; /* size: 0x0004 */
  /* 0x0020 */ volatile unsigned long TotalSystemPtes;
  /* 0x0024 */ unsigned long Hint;
  /* 0x0028 */ unsigned long LowestBitEverAllocated;
  /* 0x002c */ volatile struct _MI_CACHED_PTES* CachedPtes;
  /* 0x0030 */ volatile unsigned long TotalFreeSystemPtes;
} MI_SYSTEM_PTE_TYPE, *PMI_SYSTEM_PTE_TYPE; /* size: 0x0034 */

