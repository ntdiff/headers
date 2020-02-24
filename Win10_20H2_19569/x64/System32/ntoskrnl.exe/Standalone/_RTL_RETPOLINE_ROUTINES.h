typedef struct _RTL_RETPOLINE_ROUTINES
{
  /* 0x0000 */ unsigned long UnwindDataOffset;
  /* 0x0004 */ unsigned long SwitchtableJump[16];
  /* 0x0044 */ unsigned long CfgIndirectRax;
  /* 0x0048 */ unsigned long NonCfgIndirectRax;
  /* 0x004c */ unsigned long ImportR10;
} RTL_RETPOLINE_ROUTINES, *PRTL_RETPOLINE_ROUTINES; /* size: 0x0050 */

