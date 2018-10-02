typedef struct _MI_HYPER_SPACE
{
  /* 0x0000 */ unsigned char VadBitmap[6144];
  /* 0x1800 */ unsigned char PaddingToPageBoundary[2048];
} MI_HYPER_SPACE, *PMI_HYPER_SPACE; /* size: 0x2000 */

