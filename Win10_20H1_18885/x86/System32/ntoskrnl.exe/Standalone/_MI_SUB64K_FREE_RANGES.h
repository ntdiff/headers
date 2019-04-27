typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _MI_SUB64K_FREE_RANGES
{
  /* 0x0000 */ struct _RTL_BITMAP BitMap;
  /* 0x0008 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ struct _MMVAD_SHORT* Vad;
  /* 0x0014 */ unsigned long SetBits;
  /* 0x0018 */ unsigned long FullSetBits;
  struct /* bitfield */
  {
    /* 0x001c */ unsigned long SubListIndex : 2; /* bit position: 0 */
    /* 0x001c */ unsigned long Hint : 30; /* bit position: 2 */
  }; /* bitfield */
} MI_SUB64K_FREE_RANGES, *PMI_SUB64K_FREE_RANGES; /* size: 0x0020 */

