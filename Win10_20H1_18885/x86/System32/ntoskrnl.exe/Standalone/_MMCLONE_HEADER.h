typedef struct _MMCLONE_HEADER
{
  /* 0x0000 */ unsigned long NumberOfPtes;
  /* 0x0004 */ volatile unsigned long NumberOfProcessReferences;
  /* 0x0008 */ struct _MMCLONE_BLOCK* ClonePtes;
  /* 0x000c */ struct _MI_PARTITION* Partition;
} MMCLONE_HEADER, *PMMCLONE_HEADER; /* size: 0x0010 */

