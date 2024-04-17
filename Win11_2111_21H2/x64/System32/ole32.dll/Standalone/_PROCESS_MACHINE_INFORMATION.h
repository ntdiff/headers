typedef enum _MACHINE_ATTRIBUTES
{
  UserEnabled = 1,
  KernelEnabled = 2,
  Wow64Container = 4,
} MACHINE_ATTRIBUTES, *PMACHINE_ATTRIBUTES;

typedef struct _PROCESS_MACHINE_INFORMATION
{
  /* 0x0000 */ unsigned short ProcessMachine;
  /* 0x0002 */ unsigned short Res0;
  /* 0x0004 */ enum _MACHINE_ATTRIBUTES MachineAttributes;
} PROCESS_MACHINE_INFORMATION, *PPROCESS_MACHINE_INFORMATION; /* size: 0x0008 */

