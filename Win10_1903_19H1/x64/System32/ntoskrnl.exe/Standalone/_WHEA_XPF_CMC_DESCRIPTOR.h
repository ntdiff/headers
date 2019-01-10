typedef union _WHEA_NOTIFICATION_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short PollIntervalRW : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned short SwitchToPollingThresholdRW : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned short SwitchToPollingWindowRW : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned short ErrorThresholdRW : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned short ErrorThresholdWindowRW : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned short Reserved : 11; /* bit position: 5 */
    }; /* bitfield */
    /* 0x0000 */ unsigned short AsUSHORT;
  }; /* size: 0x0002 */
} WHEA_NOTIFICATION_FLAGS, *PWHEA_NOTIFICATION_FLAGS; /* size: 0x0002 */

typedef struct _WHEA_NOTIFICATION_DESCRIPTOR
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ union _WHEA_NOTIFICATION_FLAGS Flags;
  union
  {
    union
    {
      struct
      {
        /* 0x0004 */ unsigned long PollInterval;
      } /* size: 0x0004 */ Polled;
      struct
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ Interrupt;
      struct
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ LocalInterrupt;
      struct
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ Sci;
      struct
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ Nmi;
      struct
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ Sea;
      struct
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ Sei;
      struct
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ Gsiv;
    }; /* size: 0x0018 */
  } /* size: 0x0018 */ u;
} WHEA_NOTIFICATION_DESCRIPTOR, *PWHEA_NOTIFICATION_DESCRIPTOR; /* size: 0x001c */

typedef union _XPF_MC_BANK_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char ClearOnInitializationRW : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char ControlDataRW : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned char Reserved : 6; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char AsUCHAR;
  }; /* size: 0x0001 */
} XPF_MC_BANK_FLAGS, *PXPF_MC_BANK_FLAGS; /* size: 0x0001 */

typedef struct _WHEA_XPF_MC_BANK_DESCRIPTOR
{
  /* 0x0000 */ unsigned char BankNumber;
  /* 0x0001 */ unsigned char ClearOnInitialization;
  /* 0x0002 */ unsigned char StatusDataFormat;
  /* 0x0003 */ union _XPF_MC_BANK_FLAGS Flags;
  /* 0x0004 */ unsigned long ControlMsr;
  /* 0x0008 */ unsigned long StatusMsr;
  /* 0x000c */ unsigned long AddressMsr;
  /* 0x0010 */ unsigned long MiscMsr;
  /* 0x0014 */ unsigned __int64 ControlData;
} WHEA_XPF_MC_BANK_DESCRIPTOR, *PWHEA_XPF_MC_BANK_DESCRIPTOR; /* size: 0x001c */

typedef struct _WHEA_XPF_CMC_DESCRIPTOR
{
  /* 0x0000 */ unsigned short Type;
  /* 0x0002 */ unsigned char Enabled;
  /* 0x0003 */ unsigned char NumberOfBanks;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ struct _WHEA_NOTIFICATION_DESCRIPTOR Notify;
  /* 0x0024 */ struct _WHEA_XPF_MC_BANK_DESCRIPTOR Banks[32];
} WHEA_XPF_CMC_DESCRIPTOR, *PWHEA_XPF_CMC_DESCRIPTOR; /* size: 0x03a4 */

