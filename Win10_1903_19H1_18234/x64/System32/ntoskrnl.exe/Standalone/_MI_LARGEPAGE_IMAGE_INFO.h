typedef struct _MI_LARGEPAGE_IMAGE_INFO
{
  /* 0x0000 */ unsigned char LargeImageBias;
  /* 0x0001 */ unsigned char Spare[3];
  /* 0x0008 */ unsigned __int64 ActualImageViewSize;
} MI_LARGEPAGE_IMAGE_INFO, *PMI_LARGEPAGE_IMAGE_INFO; /* size: 0x0010 */

