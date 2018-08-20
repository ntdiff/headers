typedef struct _MI_SYSTEM_PTE_TYPE
{
  /* 0x0000 */ struct _MMPTE* FirstFreePte;
  /* 0x0004 */ unsigned long* FailureCount;
  /* 0x0008 */ struct _KGUARDED_MUTEX* GlobalMutex;
  /* 0x000c */ volatile unsigned long TbFlushTimeStamp;
} MI_SYSTEM_PTE_TYPE, *PMI_SYSTEM_PTE_TYPE; /* size: 0x0010 */

