typedef struct _MI_SYSTEM_PTE_TYPE
{
  /* 0x0000 */ struct _MMPTE* FirstFreePte;
  /* 0x0008 */ unsigned long* FailureCount;
  /* 0x0010 */ struct _KGUARDED_MUTEX* GlobalMutex;
  /* 0x0018 */ volatile unsigned long TbFlushTimeStamp;
  /* 0x001c */ long __PADDING__[1];
} MI_SYSTEM_PTE_TYPE, *PMI_SYSTEM_PTE_TYPE; /* size: 0x0020 */

