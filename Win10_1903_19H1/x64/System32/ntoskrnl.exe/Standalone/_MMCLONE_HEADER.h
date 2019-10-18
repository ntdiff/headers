typedef struct _MMCLONE_HEADER
{
  /* 0x0000 */ unsigned __int64 NumberOfPtes;
  /* 0x0008 */ volatile unsigned __int64 NumberOfProcessReferences;
  /* 0x0010 */ struct _MMCLONE_BLOCK* ClonePtes;
  /* 0x0018 */ struct _MI_PARTITION* Partition;
} MMCLONE_HEADER, *PMMCLONE_HEADER; /* size: 0x0020 */

