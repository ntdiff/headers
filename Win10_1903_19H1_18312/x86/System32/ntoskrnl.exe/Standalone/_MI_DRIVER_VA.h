typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _MI_DRIVER_VA
{
  /* 0x0000 */ struct _MI_DRIVER_VA* Next;
  /* 0x0004 */ struct _MMPTE* PointerPte;
  /* 0x0008 */ struct _RTL_BITMAP BitMap;
  /* 0x0010 */ unsigned long Hint;
  /* 0x0014 */ unsigned long Flags;
} MI_DRIVER_VA, *PMI_DRIVER_VA; /* size: 0x0018 */

