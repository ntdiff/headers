typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

typedef struct _MI_SYSTEM_PTE_TYPE
{
  /* 0x0000 */ struct _RTL_BITMAP Bitmap;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ unsigned long Hint;
  /* 0x0018 */ struct _MMPTE* BasePte;
  /* 0x0020 */ unsigned long* FailureCount;
  /* 0x0028 */ struct _MMSUPPORT* Vm;
  /* 0x0030 */ volatile long TotalSystemPtes;
  /* 0x0034 */ volatile long TotalFreeSystemPtes;
  /* 0x0038 */ volatile long CachedPteCount;
  /* 0x003c */ unsigned long PteFailures;
  union
  {
    /* 0x0040 */ unsigned __int64 SpinLock;
    /* 0x0040 */ struct _KGUARDED_MUTEX* GlobalMutex;
  }; /* size: 0x0008 */
} MI_SYSTEM_PTE_TYPE, *PMI_SYSTEM_PTE_TYPE; /* size: 0x0048 */

