typedef struct _RTL_VERIFIER_PAGEHEAP_INFORMATION
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long HeapFlags;
  /* 0x000c */ unsigned long ExtraFlags;
  /* 0x0010 */ unsigned __int64 HeapHandle;
} RTL_VERIFIER_PAGEHEAP_INFORMATION, *PRTL_VERIFIER_PAGEHEAP_INFORMATION; /* size: 0x0018 */

typedef struct _RTL_VERIFIER_PAGEHEAPS_INFORMATION
{
  /* 0x0000 */ unsigned long TotalSize;
  /* 0x0004 */ unsigned long NumberPageHeaps;
  /* 0x0008 */ struct _RTL_VERIFIER_PAGEHEAP_INFORMATION PageHeapInformation[1];
} RTL_VERIFIER_PAGEHEAPS_INFORMATION, *PRTL_VERIFIER_PAGEHEAPS_INFORMATION; /* size: 0x0020 */

