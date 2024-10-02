typedef enum _WHEA_RECOVERY_CONTEXT_ACTION_TAKEN
{
  WheaRecoveryContextActionTakenNone = 0,
  WheaRecoveryContextActionTakenOfflineDemotion = 1,
  WheaRecoveryContextActionTakenPageNotReplaced = 2,
  WheaRecoveryContextActionTakenPageReplaced = 3,
  WheaRecoveryContextActionTakenMax = 4,
} WHEA_RECOVERY_CONTEXT_ACTION_TAKEN, *PWHEA_RECOVERY_CONTEXT_ACTION_TAKEN;

typedef union _WHEA_IN_USE_PAGE_NOTIFY_FLAGS
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned char PlatformDirected : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned char PageSwapped : 1; /* bit position: 1 */
        /* 0x0000 */ unsigned char PageDemoted : 1; /* bit position: 2 */
        /* 0x0000 */ unsigned char Reserved : 3; /* bit position: 3 */
        /* 0x0000 */ unsigned char NotifyAllOfflines : 1; /* bit position: 6 */
        /* 0x0000 */ unsigned char PageOfflined : 1; /* bit position: 7 */
      }; /* bitfield */
    } /* size: 0x0001 */ Bits;
    /* 0x0000 */ unsigned char AsUCHAR;
  }; /* size: 0x0001 */
} WHEA_IN_USE_PAGE_NOTIFY_FLAGS, *PWHEA_IN_USE_PAGE_NOTIFY_FLAGS; /* size: 0x0001 */

typedef union _WHEA_RECOVERY_CONTEXT_ACTION_TAKEN_ADDITIONAL_INFO
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Reserved : 64; /* bit position: 0 */
    } /* size: 0x0008 */ Bits;
    /* 0x0000 */ unsigned __int64 AsULONG64;
  }; /* size: 0x0008 */
} WHEA_RECOVERY_CONTEXT_ACTION_TAKEN_ADDITIONAL_INFO, *PWHEA_RECOVERY_CONTEXT_ACTION_TAKEN_ADDITIONAL_INFO; /* size: 0x0008 */

typedef struct _WHEA_RECOVERY_CONTEXT_PAGE_INFO
{
  /* 0x0000 */ unsigned long ComponentTag;
  /* 0x0004 */ long PageStatus;
  /* 0x0008 */ enum _WHEA_RECOVERY_CONTEXT_ACTION_TAKEN ActionTaken;
  /* 0x000c */ union _WHEA_IN_USE_PAGE_NOTIFY_FLAGS NotifyFlags;
  /* 0x000d */ unsigned char ImmediateSuccess;
  /* 0x000e */ unsigned short Reserved;
  /* 0x0010 */ union _WHEA_RECOVERY_CONTEXT_ACTION_TAKEN_ADDITIONAL_INFO ActionTakenAdditionalInfo;
} WHEA_RECOVERY_CONTEXT_PAGE_INFO, *PWHEA_RECOVERY_CONTEXT_PAGE_INFO; /* size: 0x0018 */

