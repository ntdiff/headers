typedef union _KCCB_SHADOW_PROCESSOR_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char Idle : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char Transitioning : 1; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char AllState;
  }; /* size: 0x0001 */
} KCCB_SHADOW_PROCESSOR_STATE, *PKCCB_SHADOW_PROCESSOR_STATE; /* size: 0x0001 */

typedef struct _KCORE_CONTROL_BLOCK_SHADOW
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ volatile unsigned __int64 CurrentIsolationDomain;
  /* 0x0010 */ volatile unsigned __int64 NextIsolationDomain;
  /* 0x0018 */ unsigned char TotalProcessors;
  /* 0x0019 */ unsigned char IdleProcessors;
  /* 0x001a */ unsigned char NewDomainProcessors;
  /* 0x001b */ unsigned char Spare;
  /* 0x001c */ union _KCCB_SHADOW_PROCESSOR_STATE ProcessorStates[4];
  /* 0x0020 */ unsigned __int64 InterruptTargets[4];
} KCORE_CONTROL_BLOCK_SHADOW, *PKCORE_CONTROL_BLOCK_SHADOW; /* size: 0x0040 */

