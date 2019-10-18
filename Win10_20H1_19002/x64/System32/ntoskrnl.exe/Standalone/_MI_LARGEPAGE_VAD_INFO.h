typedef struct _MI_LARGEPAGE_VAD_INFO
{
  /* 0x0000 */ unsigned char LargeImageBias;
  /* 0x0001 */ unsigned char Spare[3];
  /* 0x0008 */ unsigned __int64 ActualImageViewSize;
  /* 0x0010 */ struct _EPARTITION* ReferencedPartition;
} MI_LARGEPAGE_VAD_INFO, *PMI_LARGEPAGE_VAD_INFO; /* size: 0x0018 */

