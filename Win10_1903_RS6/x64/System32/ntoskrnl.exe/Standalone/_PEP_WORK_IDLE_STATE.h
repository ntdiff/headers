typedef struct _PEP_WORK_IDLE_STATE
{
  /* 0x0000 */ struct POHANDLE__* DeviceHandle;
  /* 0x0008 */ unsigned long Component;
  /* 0x000c */ unsigned long State;
} PEP_WORK_IDLE_STATE, *PPEP_WORK_IDLE_STATE; /* size: 0x0010 */

