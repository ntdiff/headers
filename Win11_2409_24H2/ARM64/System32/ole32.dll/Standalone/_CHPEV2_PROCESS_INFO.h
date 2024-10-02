typedef struct _CHPEV2_PROCESS_INFO
{
  /* 0x0000 */ unsigned long CpuFlags;
  /* 0x0004 */ unsigned short HostMachine;
  /* 0x0006 */ unsigned short GuestMachine;
  /* 0x0008 */ void* SectionHandle;
  /* 0x0010 */ void* SectionBase;
  /* 0x0018 */ void* EtwInfo;
} CHPEV2_PROCESS_INFO, *PCHPEV2_PROCESS_INFO; /* size: 0x0020 */

