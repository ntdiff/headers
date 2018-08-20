typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _MI_SYSTEM_PTE_TYPE
{
  /* 0x0000 */ struct _RTL_BITMAP Bitmap;
  /* 0x0008 */ unsigned long Hint;
  /* 0x000c */ struct _MMPTE* BasePte;
  /* 0x0010 */ unsigned long* FailureCount;
  /* 0x0014 */ struct _MMSUPPORT* Vm;
  /* 0x0018 */ volatile long TotalSystemPtes;
  /* 0x001c */ volatile long TotalFreeSystemPtes;
  /* 0x0020 */ volatile long CachedPteCount;
  /* 0x0024 */ unsigned long PteFailures;
  /* 0x0028 */ struct _KGUARDED_MUTEX* GlobalMutex;
} MI_SYSTEM_PTE_TYPE, *PMI_SYSTEM_PTE_TYPE; /* size: 0x002c */

