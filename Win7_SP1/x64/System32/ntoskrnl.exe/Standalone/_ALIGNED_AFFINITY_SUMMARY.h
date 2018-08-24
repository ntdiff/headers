typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned __int64 Bitmap[4];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x0028 */

typedef struct _ALIGNED_AFFINITY_SUMMARY
{
  /* 0x0000 */ struct _KAFFINITY_EX CpuSet;
  /* 0x0028 */ struct _KAFFINITY_EX SMTSet;
  /* 0x0050 */ long __PADDING__[12];
} ALIGNED_AFFINITY_SUMMARY, *PALIGNED_AFFINITY_SUMMARY; /* size: 0x0080 */

