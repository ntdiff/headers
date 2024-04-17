typedef struct _THREAD_POWER_THROTTLING_STATE
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long ControlMask;
  /* 0x0008 */ unsigned long StateMask;
} THREAD_POWER_THROTTLING_STATE, *PTHREAD_POWER_THROTTLING_STATE; /* size: 0x000c */

