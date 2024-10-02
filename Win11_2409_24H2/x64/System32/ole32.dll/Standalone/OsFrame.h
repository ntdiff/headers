struct OsFrame
{
  /* 0x0000 */ unsigned __int64 P1Home;
  /* 0x0008 */ unsigned __int64 P2Home;
  /* 0x0010 */ unsigned __int64 P3Home;
  /* 0x0018 */ unsigned __int64 P4Home;
  /* 0x0020 */ unsigned __int64 P5Home;
  /* 0x0028 */ unsigned __int64 SavedXmm0;
  /* 0x0030 */ unsigned __int64 SavedXmm1;
  /* 0x0038 */ unsigned __int64 SavedXmm2;
  /* 0x0040 */ unsigned __int64 SavedXmm3;
  /* 0x0048 */ unsigned __int64 pRegs;
  /* 0x0050 */ unsigned __int64 pArgs;
  /* 0x0058 */ unsigned long cbArgs;
  /* 0x005c */ unsigned long Fill1;
  /* 0x0060 */ unsigned long ReturnValue;
  /* 0x0064 */ unsigned long Fill2;
}; /* size: 0x0068 */

