typedef struct _RTL_RETPOLINE_ROUTINES
{
  /* 0x0000 */ unsigned long SwitchtableJump[16];
  /* 0x0040 */ unsigned long CfgIndirectRax;
  /* 0x0044 */ unsigned long NonCfgIndirectRax;
  /* 0x0048 */ unsigned long ImportR10;
} RTL_RETPOLINE_ROUTINES, *PRTL_RETPOLINE_ROUTINES; /* size: 0x004c */

