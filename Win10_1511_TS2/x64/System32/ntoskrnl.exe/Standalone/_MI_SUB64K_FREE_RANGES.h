typedef struct _RTL_BITMAP_EX
{
  /* 0x0000 */ unsigned __int64 SizeOfBitMap;
  /* 0x0008 */ unsigned __int64* Buffer;
} RTL_BITMAP_EX, *PRTL_BITMAP_EX; /* size: 0x0010 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _MI_SUB64K_FREE_RANGES
{
  /* 0x0000 */ struct _RTL_BITMAP_EX BitMap;
  /* 0x0010 */ struct _LIST_ENTRY ListEntry;
  /* 0x0020 */ struct _MMVAD_SHORT* Vad;
  /* 0x0028 */ unsigned short SubListIndex;
  /* 0x002a */ unsigned short Hint;
  /* 0x002c */ unsigned long SetBits;
} MI_SUB64K_FREE_RANGES, *PMI_SUB64K_FREE_RANGES; /* size: 0x0030 */

