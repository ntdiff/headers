typedef struct _TEB
{
  /* 0x0000 */ void* Reserved1[12];
  /* 0x0060 */ struct _PEB* ProcessEnvironmentBlock;
  /* 0x0068 */ void* Reserved2[399];
  /* 0x0ce0 */ unsigned char Reserved3[1952];
  /* 0x1480 */ void* TlsSlots[64];
  /* 0x1680 */ unsigned char Reserved4[8];
  /* 0x1688 */ void* Reserved5[26];
  /* 0x1758 */ void* ReservedForOle;
  /* 0x1760 */ void* Reserved6[4];
  /* 0x1780 */ void* TlsExpansionSlots;
} TEB, *PTEB; /* size: 0x1788 */

