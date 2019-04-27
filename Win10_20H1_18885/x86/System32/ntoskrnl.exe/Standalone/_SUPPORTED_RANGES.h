typedef struct _SUPPORTED_RANGE
{
  /* 0x0000 */ struct _SUPPORTED_RANGE* Next;
  /* 0x0004 */ unsigned long SystemAddressSpace;
  /* 0x0008 */ __int64 SystemBase;
  /* 0x0010 */ __int64 Base;
  /* 0x0018 */ __int64 Limit;
} SUPPORTED_RANGE, *PSUPPORTED_RANGE; /* size: 0x0020 */

typedef struct _SUPPORTED_RANGES
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned char Sorted;
  /* 0x0003 */ unsigned char Reserved;
  /* 0x0004 */ unsigned long NoIO;
  /* 0x0008 */ struct _SUPPORTED_RANGE IO;
  /* 0x0028 */ unsigned long NoMemory;
  /* 0x0030 */ struct _SUPPORTED_RANGE Memory;
  /* 0x0050 */ unsigned long NoPrefetchMemory;
  /* 0x0058 */ struct _SUPPORTED_RANGE PrefetchMemory;
  /* 0x0078 */ unsigned long NoDma;
  /* 0x0080 */ struct _SUPPORTED_RANGE Dma;
} SUPPORTED_RANGES, *PSUPPORTED_RANGES; /* size: 0x00a0 */

