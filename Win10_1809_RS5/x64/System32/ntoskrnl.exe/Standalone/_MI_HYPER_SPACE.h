typedef struct _MI_HYPER_SPACE
{
  /* 0x0000 */ unsigned char VadBitmap[268435456];
  /* 0x10000000 */ unsigned char PageDirectoryCommitmentBitmap[16384];
  /* 0x10004000 */ unsigned char PageTableCommitmentBitmap[8388608];
} MI_HYPER_SPACE, *PMI_HYPER_SPACE; /* size: 0x10804000 */

