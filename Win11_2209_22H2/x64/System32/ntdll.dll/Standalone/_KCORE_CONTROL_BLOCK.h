typedef struct _KCORE_CONTROL_BLOCK
{
  /* 0x0000 */ unsigned char ProcessorCount;
  /* 0x0001 */ unsigned char ScanStartIndex;
  /* 0x0002 */ unsigned char Spare[6];
  /* 0x0008 */ struct _KPRCB* Prcbs[8];
} KCORE_CONTROL_BLOCK, *PKCORE_CONTROL_BLOCK; /* size: 0x0048 */

