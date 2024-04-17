typedef struct _MACHINE_FRAME
{
  /* 0x0000 */ unsigned __int64 Rip;
  /* 0x0008 */ unsigned short SegCs;
  /* 0x000a */ unsigned short Fill1[3];
  /* 0x0010 */ unsigned long EFlags;
  /* 0x0014 */ unsigned long Fill2;
  /* 0x0018 */ unsigned __int64 Rsp;
  /* 0x0020 */ unsigned short SegSs;
  /* 0x0022 */ unsigned short Fill3[3];
} MACHINE_FRAME, *PMACHINE_FRAME; /* size: 0x0028 */

