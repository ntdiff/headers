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
  /* 0x0028 */ unsigned long SetBits;
  /* 0x002c */ unsigned long FullSetBits;
  struct /* bitfield */
  {
    /* 0x0030 */ unsigned long SubListIndex : 2; /* bit position: 0 */
    /* 0x0030 */ unsigned long Hint : 30; /* bit position: 2 */
  }; /* bitfield */
  /* 0x0034 */ long __PADDING__[1];
} MI_SUB64K_FREE_RANGES, *PMI_SUB64K_FREE_RANGES; /* size: 0x0038 */

