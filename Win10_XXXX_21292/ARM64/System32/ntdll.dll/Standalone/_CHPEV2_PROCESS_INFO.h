typedef struct _CHPEV2_PROCESS_INFO
{
  /* 0x0000 */ unsigned long CpuFlags;
  /* 0x0008 */ void* SectionHandle;
  /* 0x0010 */ void* SectionBase;
  /* 0x0018 */ unsigned short HostMachine;
  /* 0x001a */ unsigned short GuestMachine;
  /* 0x001c */ long __PADDING__[1];
} CHPEV2_PROCESS_INFO, *PCHPEV2_PROCESS_INFO; /* size: 0x0020 */

