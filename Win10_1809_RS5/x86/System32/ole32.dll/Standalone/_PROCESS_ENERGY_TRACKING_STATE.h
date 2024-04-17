typedef struct _PROCESS_ENERGY_TRACKING_STATE
{
  /* 0x0000 */ unsigned long StateUpdateMask;
  /* 0x0004 */ unsigned long StateDesiredValue;
  /* 0x0008 */ unsigned long StateSequence;
  /* 0x000c */ unsigned long UpdateTag : 1; /* bit position: 0 */
  /* 0x0010 */ wchar_t Tag[64];
} PROCESS_ENERGY_TRACKING_STATE, *PPROCESS_ENERGY_TRACKING_STATE; /* size: 0x0090 */

