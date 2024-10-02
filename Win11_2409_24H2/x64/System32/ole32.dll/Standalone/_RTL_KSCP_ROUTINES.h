typedef struct _RTL_RETPOLINE_ROUTINES
{
  /* 0x0000 */ unsigned long SwitchtableJump[16];
  /* 0x0040 */ unsigned long CfgIndirectRax;
  /* 0x0044 */ unsigned long NonCfgIndirectRax;
  /* 0x0048 */ unsigned long ImportR10;
  /* 0x004c */ unsigned long JumpHpat;
} RTL_RETPOLINE_ROUTINES, *PRTL_RETPOLINE_ROUTINES; /* size: 0x0050 */

typedef struct _RTL_KSCP_ROUTINES
{
  /* 0x0000 */ unsigned long UnwindDataOffset;
  /* 0x0004 */ struct _RTL_RETPOLINE_ROUTINES RetpolineRoutines;
  /* 0x0054 */ unsigned long CfgDispatchSmep;
  /* 0x0058 */ unsigned long CfgDispatchNoSmep;
} RTL_KSCP_ROUTINES, *PRTL_KSCP_ROUTINES; /* size: 0x005c */

