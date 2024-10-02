typedef struct _CHPEV2_CPUAREA_INFO
{
  /* 0x0000 */ unsigned char InSimulation;
  /* 0x0001 */ unsigned char InSyscallCallback;
  /* 0x0002 */ unsigned char CriticalLockHeld;
  /* 0x0003 */ unsigned char AvoidUpcallToKernel32;
  /* 0x0008 */ void* EmulatorStackBase;
  /* 0x0010 */ void* EmulatorStackLimit;
  /* 0x0018 */ struct _AMD64_CONTEXT* ContextAmd64;
  union
  {
    /* 0x0020 */ volatile long* SuspendDoorbell;
    /* 0x0020 */ volatile long* Doorbell;
  }; /* size: 0x0008 */
  /* 0x0028 */ void* LoadingModuleModflag;
  /* 0x0030 */ void* EmulatorData;
  /* 0x0038 */ void* EmulatorData2;
  /* 0x0040 */ void* EmulatorData3;
  /* 0x0048 */ void* EmulatorData4;
  /* 0x0050 */ unsigned char EmulatorDataInline[2048];
} CHPEV2_CPUAREA_INFO, *PCHPEV2_CPUAREA_INFO; /* size: 0x0850 */

