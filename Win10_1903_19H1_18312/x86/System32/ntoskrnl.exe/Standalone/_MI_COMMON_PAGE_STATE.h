typedef struct _MI_COMMON_PAGE_STATE
{
  /* 0x0000 */ struct _MMPFN* PageOfOnesPfn;
  /* 0x0004 */ unsigned long PageOfOnes;
  /* 0x0008 */ struct _MMPFN* DummyPagePfn;
  /* 0x000c */ unsigned long DummyPage;
  /* 0x0010 */ unsigned long PageOfZeroes;
  /* 0x0014 */ void* ZeroMapping;
  /* 0x0018 */ void* OnesMapping;
  /* 0x0020 */ unsigned __int64 ZeroCrc;
  /* 0x0028 */ unsigned __int64 OnesCrc;
  /* 0x0030 */ unsigned long BitmapGapFrames[2];
  /* 0x0038 */ unsigned long PfnGapFrames[2];
} MI_COMMON_PAGE_STATE, *PMI_COMMON_PAGE_STATE; /* size: 0x0040 */

