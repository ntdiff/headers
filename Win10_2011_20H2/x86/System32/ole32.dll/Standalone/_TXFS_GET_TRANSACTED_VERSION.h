typedef struct _TXFS_GET_TRANSACTED_VERSION
{
  /* 0x0000 */ unsigned long ThisBaseVersion;
  /* 0x0004 */ unsigned long LatestVersion;
  /* 0x0008 */ unsigned short ThisMiniVersion;
  /* 0x000a */ unsigned short FirstMiniVersion;
  /* 0x000c */ unsigned short LatestMiniVersion;
  /* 0x000e */ char __PADDING__[2];
} TXFS_GET_TRANSACTED_VERSION, *PTXFS_GET_TRANSACTED_VERSION; /* size: 0x0010 */

