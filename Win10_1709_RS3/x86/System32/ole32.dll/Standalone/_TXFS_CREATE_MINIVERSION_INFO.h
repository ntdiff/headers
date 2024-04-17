typedef struct _TXFS_CREATE_MINIVERSION_INFO
{
  /* 0x0000 */ unsigned short StructureVersion;
  /* 0x0002 */ unsigned short StructureLength;
  /* 0x0004 */ unsigned long BaseVersion;
  /* 0x0008 */ unsigned short MiniVersion;
  /* 0x000a */ char __PADDING__[2];
} TXFS_CREATE_MINIVERSION_INFO, *PTXFS_CREATE_MINIVERSION_INFO; /* size: 0x000c */

